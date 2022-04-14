#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int num, fac;

	num = 612852475143;
	for (fac = 2; fac <= num; fac++)
	{
		if (num % fac == 0)
		{
			num /= fac;
			fac--;
		}
	}
	printf("%ld\n", fac);
	return (0);
}
