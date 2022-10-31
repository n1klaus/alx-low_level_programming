#include "search_algos.h"
/**
 * print_subarray - print segment of array
 * array : pointer to the first element of the array
 * left : starting index
 * right : ending index
 *
 * Return : nothing
 */
void print_subarray(int *array, int left, int right)
{
	int index = left;

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

/**
 * binary_search - searches for a value in a sorted array of integers
 * array : pointer to the first element of the array to search in
 * size : number of elements in array
 * value : value to search for
 *
 * Return : the index where value is located in array,
 * 	otherwise -1 if not present in array
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned long left = 0, middle, right = size - 1;

	if (array == NULL)
		return (-1);
	
	while (left != right)
	{
		middle = (left + right + 1) / 2;
		if (array[middle] > value)
			right = middle - 1;
		else
			left = middle;
		print_subarray(array, left, right);
	}
	if (array[middle] == value)
		return (middle);
	return (-1);
}


