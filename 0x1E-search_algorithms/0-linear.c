#include "search_algos.h"

/**
 * linear_search - searches for value in array
 * @array: pointer to the first element in the array
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: index where value is located or -1
 */

int linear_search(int *array, size_t size, int value)
{
	int index;
	size_t i;

	index = -1;

	if (array == NULL)
		return (index);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}

	return (index);
}
