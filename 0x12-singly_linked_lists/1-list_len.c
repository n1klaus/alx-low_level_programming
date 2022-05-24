#include "lists.h"
/**
  * list_len - prints all elements of a list_t list
  * @h: head node
  *
  * Return: return the number of nodes
  */
size_t list_len(const list_t *h)
{
	unsigned int c;

	c = 0;
	while (h != NULL)
	{
		h = h->next;
		c++;
	}
	return ((size_t)c);
}

