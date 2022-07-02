#include "main.h"
/**
 * main - UNIX command line interpretor 
 * 
 * Return : Always 0
 */
int main(int ac, char **av)
{
    int wstate;
    ssize_t numchar;
    size_t len;
    pid_t parent_pid, child_pid;
    char **lineptr = malloc(sizeof(char) * MAXLEN);
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
            printf("%s", *lineptr);
            printf("%s", prompt);
        }
    }
    else
    {
        wait(&wstate);
        printf("(%u) spawned child has exited !!\n", child_pid);
        printf("(%u) is exiting !!\n", parent_pid);
    }

    free(instream);
    free(lineptr);
    return (EXIT_SUCCESS);
}