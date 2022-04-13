#include <stdio.h>
#include "1-main.c"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
