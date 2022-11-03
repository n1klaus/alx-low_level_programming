#include "search_algos.h"
#include<math.h>
/**
 * jump_list - searches for a value in a sorted list of integers
 * using the Jump search algorithm
 * @list : pointer to the head of the list to search in
 * @size : number of nodes in list
 * @value : value to search for
 *
 * Return: pointer to the first node where value is located,
 * otherwise NULL if not present or if @list is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	unsigned long step = sqrt(size), index = list->index;

	if (list == NULL)
		return (NULL);

	while (step <= size)
	{
		while (list->index != index)
			list = list->next;
		index = step;
		step += sqrt(size);
		printf("Value checked array[%lu] = [%d]\n",
			list->index, list->n);
		if (list->n >= value)
			break;
	}

	index > 0 ? index -= (int)sqrt(size) : 0;
	step > sqrt(size) ? step -= (int)sqrt(size) : (int)sqrt(size);

	printf("Value found between indexes [%lu] and [%lu]\n",
		index, step);

	while (index < size)
	{
		list = list->next;
		printf("Value checked array[%lu] = [%d]\n",
			list->index, list->n);
		if (list->n == value)
			return (list);
		index++;

	}
	return (NULL);
}
