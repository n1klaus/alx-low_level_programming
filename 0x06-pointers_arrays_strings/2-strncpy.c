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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
