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
	unsigned long int hashindex = hash_djb2((unsigned char *)key);
	unsigned long int location = hashindex % ht->size;
	hash_node_t *temp = NULL;

	if (key == NULL)
		return (0);
	temp = ht->array[location];
	temp = (hash_node_t *) malloc(sizeof(hash_node_t));
	temp->key = (char *) malloc(strlen(key) + 1);
	temp->value = (char *) malloc(strlen(value) + 1);
	if (temp == NULL || temp->key == NULL || temp->value == NULL)
		return (0);
	strcpy(temp->key, key);
	strcpy(temp->value, value);
	temp->next = NULL;
	return (1);
}
