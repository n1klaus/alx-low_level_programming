#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
void free_grid(int **grid, int height);
int **alloc_grid(int width, int height);
char *argstostr(int ac, char **av);
#endif /* MAIN_H */
