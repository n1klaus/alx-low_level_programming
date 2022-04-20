#include "main.h"
/**
 * swap_int - swap the values of two integers
 *
 * @a : first integer
 * @b : second integer
 *
 */
void swap_int(int *a, int *b)
{
	int temp1, temp2;

	temp1 = *a;
	temp2 = *b;
	*a = temp2;
	*b = temp1;
}
