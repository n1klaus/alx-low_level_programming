#include "search_algos.h"
#include<math.h>

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
 * advanced_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @left: start index in array
 * @right: ending index in array
 * @value: value to search for
 *
 * Return: the first index where value is located in array,
 *	otherwise -1 if not present in array
 */
int advanced_search(int *array, size_t left, size_t right, int value)
{
	unsigned long middle;

	print_subarray(array, left, right);
	if (array[left] == value)
		return (left);
	if (left < right)
	{
		middle = ceil((left + (right)) / 2);
		if (array[middle] >= value)
			return advanced_search(array, left, middle - 1, value);
		else if (array[middle] < value)
			return advanced_search(array, middle + 1, right, value);
		print_subarray(array, left, right);
	}
	return (-1);
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located in array,
 *	otherwise -1 if not present in array
 */
int advanced_binary(int *array, size_t size, int value)
{
	unsigned long left = 0, right = size - 1;

	if (array == NULL)
		return (-1);

	return (advanced_search(array, left, right, value));
}