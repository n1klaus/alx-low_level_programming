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
	if (*head == NULL)
	{
		*head = new;
		(*head)->prev = NULL;
		(*head)->next = NULL;
	}
	else
	{
		tail = *head;
		while (tail != NULL)
			tail = tail->next;
		tail->next = new;
		new->prev = tail;
		new->next = NULL;
	}
	return ((dlistint_t *)(new));
}
