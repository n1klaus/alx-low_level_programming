#include "hash_tables.h"
/**
 * get_prime - get the nearest prime number from an integer number
 * if itself is not a prime
 * @num: integer number
 *
 * Return: the nearest prime to num
 */
int get_prime(size_t num)
{
	int result = 0;

	if (num % 2 == 0)
		num++;

	while ((result = test_prime(num)) != PRIME)
		num += 2;
	return (num);
}
