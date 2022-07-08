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
	int counter = 0;

	tail = head;
	if (tail == NULL)
		exit(EXIT_SUCCESS);
	while (tail->next != NULL)
	{
		tail = tail->next;
		counter++;
	}

	while (counter--)
	{
		current = tail;
		tail = tail->prev;
		free(current);
	}
	free(tail);
}
