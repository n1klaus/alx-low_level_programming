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
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}

