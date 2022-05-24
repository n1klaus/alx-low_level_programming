#include "lists.h"
/**
  * print_list - prints all elements of a list_t list
  * @h: head node
  *
  * Return: return the number of nodes
  */
size_t list_len(const list_t *h)
{
	unsigned int c;

	c = 0;
	while (c <= sizeof(*h) && h != NULL)
	{
		h = h->next;
		c++;
	}
	return ((size_t)c);
}

