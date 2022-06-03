#include "main.h"

/**
 * print_string - prints a string
 *
 * @str: input string.
 *
 * Return: no return.
 */
void print_string(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			break;
		}
		_putchar(str[count]);
		count++;
	}
}
