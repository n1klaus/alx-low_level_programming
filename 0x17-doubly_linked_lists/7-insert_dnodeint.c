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
	unsigned int counter = 0;

	if (new == NULL)
		return (NULL);
	new->n = n;
	current = *h;
	if (*h == NULL)
	{
		if (idx > 0)
			return (NULL);
		new->next = NULL;
		new->prev = NULL;
		*h = new;
		return ((dlistint_t *)new);
	}
	while (current->next != NULL)
	{
		temp = current;
		if (counter == idx)
		{
			if (idx == 0)
			{
				new->next = current;
				current->prev = new;
				*h = new;
				break;
			}
			temp = temp->prev;
			temp->next = new;
			new->prev = temp;
			new->next = current;
			current->prev = new;
			break;
		}
		current = current->next;
		counter++;
	}
	return ((dlistint_t *)new);
}
