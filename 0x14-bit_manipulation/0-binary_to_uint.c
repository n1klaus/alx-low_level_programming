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
	unsigned int num;
	int len, bin;

	if (b == NULL)
		return (0);

	for (len = 0; *(b + len) != '\0'; len++)
		;

	num = 0;

	for (len--, bin = 1; len >= 0; len--, bin *= 2)
	{
		if (*(b + len) != '0' && *(b + len) != '1')
			return (0);

		if (*(b + len) & 1)
			num += bin;
	}
	return (num);
}
