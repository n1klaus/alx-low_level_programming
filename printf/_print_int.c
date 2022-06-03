#include "main.h"
/**
 * _print_int - prints an int
 * @a: int to print
 */
void _print_int(va_list a)
{
	_putchar("%d", va_arg(a, int));
}
