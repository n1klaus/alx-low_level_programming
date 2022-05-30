#include "lists.h"
/**
  * reverse_listint - reverse a listint_t list
  * @head: head node
  *
  * Return: a pointer to the first node of the reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_node, *prev_node;

	prev_node = next_node = NULL;

	if (*head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next_node;
	}
	*head = prev_node;
	return (*head);
}
