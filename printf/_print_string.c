#include "main.h"
/**
 * _print_string - prints a char string
 * @a: string to print
 */
void _print_string(va_list a)
{
	char *current;

	current = va_arg(a, char *);
	if (current == NULL)
	{
		_putchar("(nil)");
		return;
	}
	_putchar("%s", current);
}
