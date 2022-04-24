#include "main.h"
/**
 * _strcat - concatenates dest to src
 * @dest : string to be concatenated to *src
 * @src : string to be appended
 * Return: conactenated string.
 */
char *_strcat(char *dest, char *src)
{
	//char *temp[13], *d[6];
	int i;

	//temp = src;
	//d[6] = dest;

	for (i = 6; i <= 11; i++)
	{
		//if (i <= 5)
		//{
		//	*(temp + i) = *(src + i);
		//}
		if (i >= 6)
		{
			*(src + i) = *(dest + i);
		}
	}
	*(src + 12) = '\0';

	return (src);
}
