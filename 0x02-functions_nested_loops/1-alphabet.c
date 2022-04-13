#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: Always 0
 */
void print_alphabet(void);

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar('\n');
}

int main(void)
{
	print_alphabet();	
	return (0);
}

