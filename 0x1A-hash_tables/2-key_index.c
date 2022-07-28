#include "hash_tables.h"
/**
 * key_index - Get the index of a key
 * @key : key
 * @size : size of the array of the hash table
 *
 * Return unsigned long int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);
	hash_table_t *hash_table = hash_table_create(size);

	if (hash_table == NULL)
		exit(EXIT_FAILURE);

	if (hash_table->array[index] == 0)
		exit(EXIT_FAILURE);
	return (index);
}
