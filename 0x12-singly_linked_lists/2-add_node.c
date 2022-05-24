#include "lists.h"
/**
  * add_node - adds a new node at the beginning of a list_t list
  * @head: head node
  * @str: string of characters
  *
  * Return: the address of the new element or NULL if failed
  */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int l;
	list_t *temp;

	l = 0;
	while (str[l] != '\0')
		l++;
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->next = *head;
	temp->str = strdup(str);
	temp->len = l;
	*head = temp;
	return (*head);
}

