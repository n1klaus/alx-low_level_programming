#include "main.h"
/**
 * _strncat - concatenates dest to src
 * @src : string to be concatenated to dest
 * @dest : string to be appended to
 * @n : integer bytes for use
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int l = 0, c = 0;

	while (*(dest + l) != '\0')
	{
		l++;
	}

	while (c < n)
	{
		*(dest + l) = *(src + c);
		if (*(src + c) == '\0')
			break;
		l++;
		c++;
	}
	return (dest);
}
