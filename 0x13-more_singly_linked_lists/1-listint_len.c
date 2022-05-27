#include "lists.h"
/**
  * listint_len - returns the number of the elements of a listint_t list
  * @h: header node
  *
  * Return: the number of nodes
  */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
