#include "lists.h"
/**
  * print_list - prints all elements of a list_t list
  * @h: head node
  *
  * Return: return the number of nodes
  */
size_t print_list(const list_t *h)
{
	unsigned int c;

	c = 0;
	while (c <= sizeof(*h) && h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[%d] (%s)\n", 0, "nil");
		h = h->next;
		c++;
	}
	return ((size_t)c);
}

