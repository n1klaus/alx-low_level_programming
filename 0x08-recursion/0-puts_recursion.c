#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	int i;

	i = 0;

	while (*(s + i) != '\0')
	{
		putchar(*(s + i));
		i++;
	}
	putchar('\n');
}
