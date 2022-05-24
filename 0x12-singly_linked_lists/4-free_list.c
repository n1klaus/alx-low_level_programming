#include "lists.h"
/**
  * free_list - frees a list_t list
  * @head: head node
  *
  * Return: nothing or NULL if failed
  */
void free_list(list_t *head)
{
	list_t *nxt;

	if (head == NULL)
		return;
	while ((nxt = head) != NULL)
	{
		head = head->next;
		free(nxt->str);
		free(nxt);
	}
}

