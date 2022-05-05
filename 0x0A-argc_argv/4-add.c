#include "main.h"
#include <stdlib.h>
#include <ctype.h>
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
	int sum;
	int count;
	int i;

	count = 1;
	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (count < argc)
	{
		for (i = 0; argv[count][i] != '\0'; i++)
		{
			if (!(isdigit(argv[count][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[count]);
		count++;
	}

	printf("%d\n", sum);
	return (0);
}
