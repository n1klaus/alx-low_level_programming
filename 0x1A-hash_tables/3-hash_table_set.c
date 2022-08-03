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

	if (key == NULL)
		return(0);
	if (ht->array[location] != NULL)
	{
		hash_node_t *new = (hash_node_t *) malloc(sizeof(hash_node_t));
		if (new == NULL)
			return(0);
		strcpy(new->key, key);
		strcpy(new->value, value);
		ht->array[location]->next = NULL;
		new->next = ht->array[location];
		return (1);
	}
	ht->array[location]->key = (char *) malloc(sizeof(char *));
	ht->array[location]->value = (char *) malloc(sizeof(char *));
	strcpy(ht->array[location]->key, key);
	strcpy(ht->array[location]->value, value);
	return(1);
}
