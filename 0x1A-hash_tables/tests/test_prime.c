#include "hash_tables.h"
/**
 * test_prime - run tests to check whether an integer
 * number is prime or not
 * @num : integer number
 *
 * Return: PRIME if the tests succeed,
 * otherwise NOT_PRIME
 */
int test_prime(size_t num)
{
	size_t i = 2;

	if (num == 0 || num == 1)
		return (NOT_PRIME);

	for (; i < (num / 2); i++)
	{
		if (num % i == 0)
			return (NOT_PRIME);
	}
	return (PRIME);
}
