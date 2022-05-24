#include "lists.h"
/**
  * add_node_end - adds a new node at the end of a list_t list
  * @head: head node
  * @str: string of characters
  *
  * Return: the address of the new element or NULL if failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int l;
	list_t *temp, *tail;

	tail = malloc(sizeof(list_t));
	if (tail == NULL)
		return (NULL);

	l = 0;
	temp = *head;

	if (temp == NULL)
	{
		*head = tail;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = tail;
	}

	while (str[l] != '\0')
		l++;
	tail->str = strdup(str);
	tail->len = l;
	return (tail);
}

