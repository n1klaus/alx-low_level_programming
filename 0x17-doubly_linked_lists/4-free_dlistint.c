#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head : head node of the list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tail = NULL, *current = NULL;
	int counter;

	tail = head;
	while (tail != NULL)
	{
		tail = tail->next;
		counter++;
	}

	while (counter--)
	{
		current = tail;
		current = current->prev;
		free(tail);
	}
}
