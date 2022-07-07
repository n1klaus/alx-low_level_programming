#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h : head node of the list
 * @idx : index position of the new node in the list
 * @n : integer value
 *
 * Return: pointer to the new node,
 * or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = NULL, *temp = NULL,
	*new = malloc(sizeof(dlistint_t));
	int counter = 0;

	if (new == NULL)
		return (NULL);

	if (h == NULL)
	{
		*h = new;
		(*h)->n = n;
		(*h)->next = NULL;
		(*h)->prev = NULL;
		return ((dlistint_t *)*h);
	}

	current = *h;
	for (; current != NULL; ++counter)
	{
		current = temp = current->next;
		if (counter == idx)
		{
			temp = temp->next;
			current->next = new;
			new->next = temp;
			new->prev = current;
			temp->prev = new;
			break;
		}
	}
	return ((dlistint_t *)new);;
}
