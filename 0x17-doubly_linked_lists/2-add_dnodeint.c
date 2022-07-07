#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head : head node of the list
 * @n : integer value
 *
 * Return: pointer to the newly created node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = NULL, *new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	temp = *head;
	new->n = n;
	if (temp != NULL)
		temp->prev = new;
	new->next = temp;
	new->prev = NULL;
	*head = new;
	return ((dlistint_t *)(*head));
}
