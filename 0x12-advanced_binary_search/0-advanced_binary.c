#include "search_algos.h"
/**
 * find_index - recursively finds the first index a given value occured in
 * using the binary search method
 * @array: Given array to search through (sorted integers)
 * @start_index: The starting index of the array (begins at 0)
 * @end_index: The ending index of the array
 * @value: The value to search for
* Return: returns -1 on failure or index of found intger
 */
int find_index(int *array, int start_index, int end_index, int value)
{
	/* start_index, end_index */
	int middle;
	int i;

	if (end_index >= start_index)
	{
		printf("Searching in array: ");
		for (i = start_index; i <= end_index; i++)
		{
			printf("%d", array[i]);
			if (i != end_index)
			printf(", ");
		}
		printf("\n");
		middle = start_index + (end_index - start_index) / 2;
		if (array[middle] == value && array[middle - 1] != value)
			return (middle);
		if (array[middle] >= value)
			return (find_index(array, start_index, middle, value));
		if (array[middle] <= value)
			return (find_index(array, middle + 1, end_index, value));
	}
	return (-1);
}

/**
 * advanced_binary - recursively searches for a value in a sorted array of ints
 * @array: Sorted array of integers to search through
 * @size: The size of the array
 * @value: The value to search for
 * Return: returns -1 on failure or index of found intger
 */
int advanced_binary(int *array, size_t size, int value)
{
	return (find_index(array, 0, size - 1, value));
}
