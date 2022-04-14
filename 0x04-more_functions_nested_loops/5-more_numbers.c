#include "main.h"
/**
 * more_numbers - Print numbers from 0 to 9.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i = 48;
	int j = 48;

	for (; i <= 57; i++)
	{
		_putchar(i);
	}

	for (; j <= 52; j++)
	{
		i = 49;
		_putchar(i);
		_putchar(j);
	}
	_putchar('\n');
}
