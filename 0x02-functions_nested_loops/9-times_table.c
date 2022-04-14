#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: no return
 */
void times_table(void)
{
	int a, b, op;

	for (a = 0; a <= 9; a++)
	{
		putchar(48);
		for (b = 1; b <= 9; b++)
		{
			op = a * b;
			putchar(44);
			putchar(32);
			if (op <= 9)
			{
				putchar(32);
				putchar(op + 48);
			}
			else
			{
				putchar((op / 10) + 48);
				putchar((op % 10) + 48);
			}
		}
		putchar('\n');
	}
}
