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
	unsigned long int index = 2;
	hash_table_t *hash_table = (hash_table_t *)
				malloc(sizeof(hash_table_t));

	hash_table->size = size;
	hash_table->array = (hash_node_t **) malloc(sizeof(hash_node_t) *
				hash_table->size);
	if (hash_table == NULL || hash_table->array == NULL)
		return (NULL);

	for (index = 0; index < hash_table->size; index++)
		hash_table->array[index] = NULL;

	return (hash_table);
}
