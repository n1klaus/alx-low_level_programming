#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 * array : pointer to the first element of the array to search in
 * size : number of elements in array
 * value : value to search for
 *
 * Return : the first index where value is located in array,
 * 	otherwise -1 if not present in array
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned long index = 0;

	if (array == NULL)
		return (-1);

	for (; index < size; index++)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}


