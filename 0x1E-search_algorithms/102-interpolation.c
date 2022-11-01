#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array
 * of integers using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located,
 * otherwise -1 if array is NULL or @value is not present
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1, mid = 0;

	if (array == NULL)
		return (-1);

	while ((array[low] <= array[high]) && (value >= array[low])
			&& (value <= array[high]))
	{
		mid = low + ((high - low) / (array[high] - array[low]) *
			(value - array[low]));
		printf("Value checked array[%d] = [%d]\n", mid, array[mid]);
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}

	if (value == array[low])
		return (low);
	printf("Value checked array[%d] is out of range\n", mid);
	return (-1);
}
