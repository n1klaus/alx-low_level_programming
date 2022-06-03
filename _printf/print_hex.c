#include "main.h"
/**
 * print_hex - prints a hexadecimal.
 * @n: input integer.
 * Return: no return.
 */ 
void print_hex(long int n)
{
    long decimalnum, quotient, remainder;
    int i, j = 0;
    char hexadecimalnum[100];
 
    decimalnum = n;
 
    quotient = decimalnum;
 
    while (quotient != 0)
    {
        remainder = quotient % 16;
        if (remainder < 10)
            hexadecimalnum[j++] = 48 + remainder;
        else
            hexadecimalnum[j++] = 55 + remainder;
        quotient = quotient / 16;
    }
 
    /* display integer into character */
    for (i = j; i >= 0; i--)
            _putchar(hexadecimalnum[i]);
}
