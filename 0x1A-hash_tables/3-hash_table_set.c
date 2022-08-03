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
	unsigned long int location = key_index((const unsigned char *)key,
					(unsigned long int) ht->size);
	hash_node_t *temp = NULL, *new = NULL;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	temp = ht->array[location];
	if (temp == NULL)
	{
		temp = (hash_node_t *) malloc(sizeof(hash_node_t));
		temp->key = (char *) malloc(strlen(key) + 1);
		temp->value = (char *) malloc(strlen(value) + 1);
		if (temp == NULL || temp->key == NULL || temp->value == NULL)
			return (0);
		temp->key = strdup(key);
		if (temp->key == NULL)
			return (0);
		temp->value = strdup(value);
		if (temp->value == NULL)
			return (0);
		temp->next = NULL;
		return (1);
	}
	new = (hash_node_t *) malloc(sizeof(hash_node_t));
	new->key = (char *) malloc(strlen(key) + 1);
	new->value = (char *) malloc(strlen(value) + 1);
	if (new == NULL || new->key == NULL || new->value == NULL)
		return (0);
	new->key = strdup(key);
	if (new->key == NULL)
		return (0);
	new->value = strdup(value);
	if (new->value == NULL)
		return (0);
	temp->next = NULL;
	new->next = temp;
	ht->array[location] = new;
	return (1);
}
