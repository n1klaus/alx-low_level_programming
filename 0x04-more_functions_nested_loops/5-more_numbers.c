#include "main.h"
/**
 * more_numbers - Print numbers from 0 to 9.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i, j;
	int k;

	for (k = 1; k <= 10; k++)
	{
		for (i = 48; i <= 57; i++)
		{
			_putchar(i);
		}
		for (j = 48; j <= 52; j++)
		{
			i = 49;
			_putchar(i);
			_putchar(j);
		}
		_putchar('\n');
	}
}
