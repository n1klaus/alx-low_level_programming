#include "main.h"
/**
 * print_octal - prints an octal.
 * @n: input integer.
 * Return: no return.
 */ 
void print_octal(int n)
{
    long decimalnum, quotient;
    int octalNumber[100], i = 1, j;
 
    quotient = decimalnum = n;
    while (quotient != 0)
    {
        octalNumber[i++] = quotient % 8;
        quotient = quotient / 8;
    }
    for (j = i - 1; j > 0; j--)
        _putchar(octalNumber[j]);
    _putchar('\n');
}
