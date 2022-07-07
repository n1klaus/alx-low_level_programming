#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data of a dlistint_t linked list
 * @head : head node of the list
 *
 * Return: nodes from position 0 to index,
 * or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = NULL;
	int sum = 0;

	current = head;
	while (current != NULL)
	{
		current = current->next;
		sum += current->n;
	}
	return (sum);
}
