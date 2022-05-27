#include "lists.h"
/**
  * pop_listint - deletes the head node of a listint_t list
  * @head: header node
  *
  * Return: the head node's data; 0 if empty
  */
int pop_listint(listint_t **head)
{
	listint_t *nxt, *new;
	int data;

	if (head == NULL)
		return (0);
	new = *head;
	data = new->n;
	nxt = new->next;
	free(new);
	*head = nxt;
	return (data);
}
