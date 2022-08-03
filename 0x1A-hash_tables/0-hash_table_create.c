#include "hash_tables.h"
/**
 * hash_table_create - create a hash table
 * @size : size of the array
 *
 * Return: pointer to a created hash_table_t hash table of size @size,
 * otherwise return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	size_t index = 2;
	hash_table_t *hash_table = NULL;

	if (size % 2 == 0)
		size++;

	for (; index < (size / 2); index++)
	{
		if (size % index == 0)
			size += 2;
		else
			break;
	}
	hash_table = malloc(sizeof(hash_node_t) * size);
	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	return (hash_table);
}
