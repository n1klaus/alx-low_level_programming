#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head : head node of the list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL, *current = NULL;
	int counter;

	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		counter++;
	}

	while(counter--)
	{
		current = temp;
		current = current->prev;
		free(temp);
	}
}
