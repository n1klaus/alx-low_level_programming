#include "main.h"
/**
 * _printf - prints all args passed to function
 * @format: list of args to give data types.
 */
void _printf(const char * const format, ...)
{
	va_list list;
	const char *copy;
	formatter formats[] = {
		{"c", _print_char},
		{"i", _print_int},
		{"f", _print_float},
		{"s", _print_string},
		{NULL, NULL}
	};
	int i, j;
	char *sep;

	sep = "";
	i = j = 0;
	copy = format;
	va_start(list, format);
	while (copy && copy[j] != '\0')
	{
		i = 0;
		while (formats[i].flag)
		{
			if (formats[i].flag[0] == copy[j])
			{
				_putchar("%s", sep);
				(formats[i].f)(list);
				sep = ", ";
			}
			i++;
		}
		j++;
	}
	_putchar("\n");
	va_end(list);
}
