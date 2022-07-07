#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h : head node of the list
 *
 * Return: number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = NULL;
	size_t counter = 0;

	if (h == NULL)
		return (0);

	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		counter++;
	}
	return (counter);
}
