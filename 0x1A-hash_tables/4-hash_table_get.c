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
	unsigned long int location = key_index((const unsigned char *)key,
					(unsigned long int) ht->size);
	hash_node_t *temp = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	if (location >= ht->size)
		return (NULL);
	temp = ht->array[location];
	while (temp != NULL)
	{
		if (strcmp(ht->array[location]->key, key) == 0)
		{
			return ((char *)ht->array[location]->value);
		}
		temp = temp->next;
	}
	return (NULL);
}
