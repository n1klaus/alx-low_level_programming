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

	for (c = 0; c <= sizeof(*h) && h != NULL; c++)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
	}
	return ((size_t)c);
}

