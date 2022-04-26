#include "main.h"
/**
 * _strchr - returns the first occurence of character c in the string s
 * @s: string
 * @c: character in s
 *
 * Return: pointer to first occurence of c
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) != c)
			*s -= *(s + i);
		else
			break;
		i++;
	}
	return (s);
}
