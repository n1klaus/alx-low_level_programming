#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head : head node of the list
 * @index : index position of the node starting from 0
 *
 * Return: nodes from position 0 to index,
 * or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = NULL;
	unsigned int counter = 0;

	current = head;
	if (head == NULL)
		return (NULL);
	while (current->next != NULL)
	{
		current = current->next;
		counter++;
		if (counter == index)
			break;
	}
	return (current);
}
