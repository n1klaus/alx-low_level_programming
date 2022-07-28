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
	hash_table_t *hash_table = NULL;
	hash_node_t **node_array = NULL;

	if (size % 2 == 0)
		size++;

	for (; index < (size / 2); index++)
	{
		if (size % index == 0)
			size += 2;
		else
			break;
	}
	node_array = malloc(sizeof(hash_node_t) * size);
	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL || node_array == NULL)
		return (NULL);
	hash_table->size = size;
	hash_table->array = node_array;
	return (hash_table);
}
