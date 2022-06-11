#include "main.h"
/**
 * main - UNIX command line interpretor
 * with arguments handling 
 * 
 * Return : Always 0
 */
int main(int ac, char **av)
{
    int wstate, status, i = 1;
    pid_t parent_pid, child_pid;
    size_t len = MAXLEN;
    struct stat statbuf;
    char *prompt = "#cmd$ ";

    if (ac < 2)
        printf("Usage Error : %s <path>", av[0]);

    parent_pid = getpid();

    child_pid = fork();
    if (child_pid == -1)
    {
        perror("Child Error");
        return (EXIT_FAILURE);
    }
    if (child_pid == 0)
    {
        printf("%s", prompt);
        printf("%s\n", av[0]);
        while (av[i++])
        {
            if (stat(av[i], &statbuf) != 0)
            {
                perror("Stat Error")
                return(EXIT_FAILURE);
            }
            if(execve(av[i], av, NULL) == -1)
            {
                perror("Execution Error");
                return (EXIT_FAILURE);
            }
        }
    }
    else
    {
        wait(&wstate);
        printf("%s", prompt);
        printf("(%u) has exited !!\n", child_pid);
    }
    free(token_arg);
    free(lineptr);
    return (EXIT_SUCCESS);
}