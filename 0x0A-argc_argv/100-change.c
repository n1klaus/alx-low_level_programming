#include "main.h"
#include <stdlib.h>
/**
 * check_change - count coins required to make change.
 * main - prints the main function.
 * @argc: arguments count
 * @argv: arguments vector array of strings
 * Return: O if successful
 */
int check_change(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc == 2)
	{
		cents = atoi(*(argv[1]);
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
		printf("Error\n");
	return (coins);
}

int main(void)
{
	int cc;

	cc = check_change();
	if (cc == NULL)
		return (1);
	else
		return (0);
}
