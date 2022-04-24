#include "main.h"
/**
 * _strncpy - copies  dest to src
 * @src : string to be copied to *dest
 * @dest : string to be appended
 * @n : integer bytes for use
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int s = 0, d = 0, c = 0;

	while (*(src + s) != '\0')
	{
		s++;
	}

	while (*(dest + d) != '\0')
	{
		d++;
	}

	while (c < n && n <= d && *(dest + c) != '\0')
	{
		if (n <= s)
		{
			*(dest + c) = *(src + c);
		}
		else
		{
			*(dest + c) = *(src + c);
		}
		c++;
	}
	return (dest);
}
