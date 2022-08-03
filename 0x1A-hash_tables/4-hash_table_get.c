#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht : hash table to look into
 * @key : key
 *
 * Return: value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	unsigned long int location = key_index((const unsigned char *)key,
					(unsigned long int) ht->size);

	for (index = location; ht->array[index]; index++)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			return ((char *)ht->array[index]->value);
		}
	}
	return (NULL);
}
