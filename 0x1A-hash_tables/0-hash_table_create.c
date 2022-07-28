#include "hash_tables.h"
/**
 * hash_table_create - create a hash table
 * @size : size of the array
 *
 * Return: pointer to a created hash_table_t hash table,
 * otherwise return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	size_t index = 2;
	hash_table_t *table_array;

	if (size % 2 == 0)
		size++;

	for (; index < (size / 2); index++)
	{
		if (size % index == 0)
			size += 2;
		else
			break;
	}

	table_array = malloc(sizeof(hash_table_t) * size);
	if (table_array == NULL)
		return (NULL);
	return (table_array);
}
