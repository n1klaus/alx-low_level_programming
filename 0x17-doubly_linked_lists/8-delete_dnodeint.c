#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t
 * linked list.
 * @head : head node of the list
 * @index : index position starting from 0
 *
 * Return: 1 if succeeded,
 * or -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = NULL, *nxt = NULL, *prv = NULL;
	unsigned int counter = 0;

	current = *head;
	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		if (current->next != NULL)
		{
			nxt = current->next;
			nxt->prev = NULL;
			*head = nxt;
		}
	}
	else
	{
		while (current->next != NULL)
		{
			if (counter == index)
			{
				nxt = current->next;
				prv = current->prev;
				prv->next = nxt;
				nxt->prev = prv;
				free(current);
				break;
			}
			current = current->next;
			counter++;
		}
	}
	return (1);
}
