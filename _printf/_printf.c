#include "main.h"
/**  
 * _printf - takes a string of format characters
 * 	and prints out the argument associated with each format
 * 	character based on the type.
 * @format : format specifier
 * return : 0 if successful
 */
int _printf(const char *format, ...)
{
	va_list ap;
	unsigned int d;
	char c, *s, *z = NULL;

	z = malloc(1024);
	va_start(ap, format);
	while (*format)
		switch (*format++)
		{
			case 's':
				s = va_arg(ap, char *);
				print_string(s);
				break;
			case 'd':
				d = va_arg(ap, int);
				print_number(d);
				break;
			case 'c':
				c = (char) va_arg(ap, int);
				_putchar(c);
				break;
			default:
				s = va_arg(ap, char *);
				print_string(s);
				break;
		}
	va_end(ap);
	free(z);
	return (0);
}
