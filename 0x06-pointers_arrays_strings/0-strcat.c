#include "main.h"
/**
 * _strcat - concatenates dest to src
 * @dest : string to be concatenated to *src
 * @src : string to be appended
 * Return: conactenated string.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j >= 0)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
