#include "search_algos.h"

/**
 * linear_search - searches for value in array of ints
 * @array: the array of integers
 * @size: the number of values in array
 * @value: the value to search for
 *
 * Return: the first index where value is located or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int index = -1;

	if (array == NULL)
		return (-1);

	i = 0;
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			index = i;
			return (index);
		}
		i++;
	}

	return (index);
}
