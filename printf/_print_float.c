#include "main.h"
/**
 * _print_float - prints a float
 * @a: float to print
 */
void _print_float(va_list a)
{
	_putchar("%f", va_arg(a, double));
}
