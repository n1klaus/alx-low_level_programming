#include "main.h"
/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: a string of 0 or 1 chars
  *
  * Return: the converted number; or 0 if-
  * -there is one or more chars in the string b that is not 0 or 1
  * -b is NULL
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, rem, num, bin;

	i = rem = num = 0;
	while (*(b + i) != '\0')
	{
		if (*(b + i) >=48 && *(b + i) <= 57)
			;
		else
			return (0);
		i++;
	}
	i = 0;
	bin = atoi(b);
	while (bin != 0)
	{
		rem = bin % 10;
		bin /= 10;
		num += rem * pow(2, i);
		i++;
	}
	return (num);
}
