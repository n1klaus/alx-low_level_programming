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
 * print_subarray - print segment of array
 * @array: pointer to the first element of the array
 * @left: starting index
 * @right: ending index
 *
 * Return: nothing
 **/
void print_subarray(int *array, int left, int right)
{
	int index = left;

	if (left <= right)
	{
		printf("Searching in array: ");
		while (index <= right)
		{
			printf("%d", array[index]);
			if (index != right)
				printf(", ");
			index++;
		}
		printf("\n");
	}
}

/**
 * _binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @left: starting index
 * @right: last index
 * @value: value to search for
 *
 * Return: the index where value is located in array,
 *	otherwise -1 if not present in array
 */
int _binary_search(int *array, int left, int right, int value)
{
	unsigned long middle;

	if (array == NULL)
		return (-1);

	print_subarray(array, left, right);
	while (left <= right)
	{
		middle = ((left + right) / 2) + 0.5;
		if (array[middle] > value)
			right = middle - 1;
		else if (array[middle] < value)
			left = middle + 1;
		else
			break;
		print_subarray(array, left, right);
	}
	if (array[middle] == value)
		return (middle);
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array
 * of integers using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located,
 * otherwise -1 if array is NULL or @value is not present
 */
int exponential_search(int *array, size_t size, int value)
{
	int index = 0;

	if (array == NULL)
		return (-1);

	if (array[index] == value)
		return (index);

	index += 1;
	while (index < (int)size && array[index] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", index,
			array[index]);
		index *= 2;
	}

	printf("Value found between indexes [%d] and [%d]\n", index / 2, index);
	return (_binary_search(array, index / 2, min(index, size - 1), value));
}
