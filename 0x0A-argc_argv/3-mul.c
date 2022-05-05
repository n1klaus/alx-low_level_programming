#include "main.h"
#include <stdlib.h>
/**
 * main - prints the program's name (first argument in argv),
 * followed by a new line
 *
 * @argc: arguments count
 * @argv: arguments vector array of strings
 * Return: O if successful
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", (atoi(argv[1]) * (atoi(argv[2]))));
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
