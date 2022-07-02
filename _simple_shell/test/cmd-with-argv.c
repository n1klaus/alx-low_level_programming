#include "main.h"
/**
 * main - UNIX command line interpretor
 * with arguments handling 
 * 
 * Return : Always 0
 */
int main(int ac, char **av)
{
    int wstate, i = 0;
    ssize_t numchar;
    size_t len, str_len;
    pid_t parent_pid, child_pid;
    struct stat statbuf;
    char **lineptr = malloc(sizeof(char) * MAXLEN);
    char *str_token = malloc(sizeof(char) * MAXLEN);
    char *exec_str = malloc(sizeof(char) * MAXLEN);
    char *delim = " ,:;\t";
    FILE *instream = malloc(sizeof(char) * MAXLEN);
    char *prompt = "#cmd$ ";

    if (ac != 1)
        printf("Usage Error : %s", av[0]);

    parent_pid = getpid();
    child_pid = fork();

    if (child_pid == -1)
    {
        perror("Child Error");
        return (EXIT_FAILURE);
    }

    if (child_pid == 0)
    {
        printf("(%u) is spawning !!\n", parent_pid);
        printf("%s", prompt);

        instream = fdopen(STDIN, "r");
        if (instream == NULL) {
            perror("Fdopen Error");
            return (EXIT_FAILURE);
        }

        while((numchar = getline(lineptr, &len, instream)) != -1 && numchar != EOF)
        {
            while((str_token = strtok(*lineptr++, delim)) != NULL)
            {
                str_len = strlen(str_token);
                strncpy(exec_str, str_token, --str_len);
                /*
                printf("%s", exec_str);
                printf("%s", strlen(exec_str));
                */
                printf("%s", prompt);
                
                if (stat(exec_str, &statbuf) != 0)
                {
                    perror("Stat Error");
                    return(EXIT_FAILURE);
                }

                if(execve((exec_str + i), &exec_str, NULL) == -1)
                {
                    perror("Execution Error");
                    return (EXIT_FAILURE);
                }
                
            }
        }
    }
    else
    {
        wait(&wstate);
        printf("(%u) spawned child has exited !!\n", child_pid);
        printf("(%u) is exiting !!\n", parent_pid);
    }

    free(instream);
    free(exec_str);
    free(str_token);
    free(lineptr);
    return (EXIT_SUCCESS);
}