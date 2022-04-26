#include "main.h"
/**
 * _memcpy - copy n bytes from src to dest
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: number of bytes to copy in memory
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
