#include "main.h"
#include <stdlib.h>
/**
 * main - prints the function
 *
 * @argc: arguments count
 * @argv: arguments vector array of strings
 * Return: O if successful
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc == 2)
	{
		cents = atoi(*(argv + 1));
		while (cents > 0)
		{
			if (cents % 25 < cents)
			{
				cents -= 25;
				coins++;
			}
			else if (cents % 10 < cents)
			{
				cents -= 10;
				coins++;
			}
			else if (cents % 5 < cents)
			{
				cents -= 5;
				coins++;
			}
			else if (cents % 2 < cents)
			{
				cents -= 2;
				coins++;
			}
			else if (cents % 1 < cents)
			{
				cents -= 1;
				coins++;
			}
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", coins);
	return (0);
}
