#include "hash_tables.h"
/**
 * hash_table_set - Add an element to the hash table
 * @ht : hash table you want to add or update the key/value to
 * @key : key
 * @value : value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	unsigned long int location = key_index((const unsigned char *)key,
					(unsigned long int) ht->size);
	hash_node_t *temp = NULL, *new = NULL;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	for (index = location; ht->array[index]; index++)
	{
		temp = ht->array[index];
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (temp->value == NULL)
				return (0);
			return (1);
		}
	}
	temp = ht->array[location];
	new = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	if (new->key == NULL)
		return (0);
	new->value = strdup(value);
	if (new->value == NULL)
		return (0);
	new->next = temp;
	ht->array[location] = new;
	return (1);
}
