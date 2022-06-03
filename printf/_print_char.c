#include "main.h"
/**
 * _print_char - prints a char
 * @a: char to print
 */
void _print_char(va_list a)
{
	_putchar("%c", va_arg(a, int));
}
