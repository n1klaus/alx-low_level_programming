#include "search_algos.h"
#include<math.h>
/**
 * min - find the minimum of two values
 * @a: integer number
 * @b: integer number
 *
 * Return: the smallest number
 */
int min(int a, int b)
{
	if (a > b)
		return (b);
	return (a);
}

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located,
 * otherwise -1 if array is NULL or @value is not present
 */
int jump_search(int *array, size_t size, int value)
{
	unsigned long index = 0;
	int step = sqrt(size);

	while (array[min(step, size) - 1] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", index,
			array[index]);
		index = step;
		step += sqrt(size);
		if (index >= size)
			break;
	}

	printf("Value found between indexes [%lu] and [%d]\n",
		index > 0 ? index - (int)sqrt(size) : 0,
		step > 0 ? step - (int)sqrt(size) : 0);
	while (array[index] < value && index < size)
	{
		printf("Value checked array[%lu] = [%d]\n",
			index, array[index]);
		index++;
		if ((int)index == min(step, size))
			break;
	}

	if (array[index] == value)
		return (index);
	return (-1);
}
