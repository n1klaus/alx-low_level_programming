#include "main.h"
/**
 * _memset - fill memory with b constant bytes to the string s for n bytes
 * @s: pointer to the string
 * @b: constant bytes to be filled to the string s
 * @n: number of bytes to fill in memory
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;

	while (i < (int) n)
	{
		*(s + i) = b;
		i++;
	}
	return (0);
}
