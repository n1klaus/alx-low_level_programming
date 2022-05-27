#include "lists.h"
/**
  * free_listint2 - frees a listint_t list; sets the head to NULL
  * @head: header node
  *
  * Return: nothing
  */
void free_listint2(listint_t **head)
{
	listint_t *old, *new;

	new = *head;
	if (*head != NULL)
	{
		while ((old = new) != NULL)
		{
			new = new->next;
			free(old);
		}
		*head = NULL;
	}
}
