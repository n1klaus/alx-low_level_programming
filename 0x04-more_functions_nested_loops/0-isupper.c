#include "main.h"
/**
 * _isupper - check the character if uppercase or lower case.
 * @c: character code for input
 * Return: Always 0.
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
