#include "hash_tables.h"
/**
 * hash_table_delete - delete a hash table
 * @ht : hash table to delete
 *
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *curr = NULL, *temp = NULL;
	unsigned long int index = 0;

	if (ht == NULL)
		exit(EXIT_FAILURE);

	for (; index < ht->size; index++)
	{
		curr = ht->array[index];
		while (curr != NULL)
		{
			temp = curr;
			curr = curr->next;
			ht->array[index] = curr;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
