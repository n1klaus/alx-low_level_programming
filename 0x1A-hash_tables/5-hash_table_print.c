#include "hash_tables.h"
/**
 * hash_table_print - print a hash table
 * @ht : hash table to print
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp = NULL;
	unsigned long int index = 0;
	unsigned int NEXT_AVAILABLE = 0;

	if (ht == NULL)
		exit(EXIT_FAILURE);

	fprintf(stdout, "{");
	for (; index < ht->size; index++)
	{
		temp = ht->array[index];
		if (temp != NULL)
		{
			if (NEXT_AVAILABLE)
				fprintf(stdout, ", ");
			while (temp != NULL)
			{
				fprintf(stdout, "'%s': '%s'", temp->key,
						temp->value);
				temp = temp->next;
				if (temp != NULL)
					fprintf(stdout, ", ");
			}
			NEXT_AVAILABLE = 1;
		}
	}
	fprintf(stdout, "}\n");
}
