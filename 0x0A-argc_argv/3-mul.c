#include "main.h"
#include <stdlib.h>
/**
 * main - prints the function.
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
