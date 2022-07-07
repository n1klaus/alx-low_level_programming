#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h : head node of the list
 *
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = NULL;
	size_t counter = 0;

	if (h == NULL)
		return (0);

	temp = h;
	while (temp != NULL)
	{
		dprintf(STDOUT, "%d\n", temp->n);
		temp = temp->next;
		counter++;
	}
	return (counter);
}
