#include "search_algos.h"
/**
 * 
 * 
 */
int find_index(int *array, int start, int end, int size, int value)
{
	int i = 0;
	int result;
	int left_size = 0;
	int right_size = 0;
	int new_size = 0;
	(void)value;
	(void)start;
	(void)left_size;
	(void)right_size;

	if (array[end] < value || array[start] > value)
		return (-1);
	
	/* for left */
	if (size == 1 && array[end] != value)
		return (-1);
	else if (size == 1 && array[end] == value)
		return (end);

	/* for right*/
	if (start > end && array[end] != value)
		return (-1);
	else if (start > end && array[end] == value)
		return (end);
	printf("Searching in array:");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i != end)
			printf(", ");
	}
	printf("\n");

	/*split array LEFT */
	/*if (size % 2 != 0)
		left_size = (size / 2) + 1;
	else
		left_size = (size / 2);
	result = find_index(array, start, left_size - 1, left_size, value);*/

	/*split array RIGHT */

	/* if (size % 2 != 0)
		right_size = (size / 2) + 1;
	else
		right_size = (size / 2);
	result = find_index(array, start + right_size, end, right_size, value);*/

	if (size % 2 != 0)
		new_size = (size / 2) + 1;
	else
		new_size = (size / 2);
	
	result = find_index(array, start, new_size - 1, new_size, value); // left

	result = find_index(array, start + new_size, end, new_size, value); // right

	return (result);
}

/**
 * 
 * 
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	/* whenever the number is not found inside the array return -1 */

	/* search left most first */
	/* search right most next */

	return (find_index(array, 0, size - 1, size, value));
}