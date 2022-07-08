#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head : head node of the list
 * @n : integer value
 *
 * Return: pointer to the newly created node,
 * or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tail = NULL, *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	tail = *head;
	if (tail == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = new;
		new->prev = tail;
	}
	return (new);
}
