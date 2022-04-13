#include <stdio.h>
#include "main.h"

/**
 * main - print character unicode
 *
 * Return: Always 0.
 */
int main(void)
{
	int putArray[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int i;

	for (i = 0; i < 8; i++)
	{
		putchar(putArray[i]);
	}
	putchar('\n');
	return (0);
}
