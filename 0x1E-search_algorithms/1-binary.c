#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * @array: pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: index where value is located or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid, start, i;

	size--;
	start = 0;

	if (array == NULL)
		return (-1);

	while (start <= size)
	{
		mid = (size + start) / 2;
		printf("Searching in array: %d", array[start]);
		for (i = start + 1; i <= size; i++)
			printf(", %d", array[i]);
		printf("\n");

		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			size = mid - 1;
		else if (value > array[mid])
			start = mid + 1;
	}

	return (-1);
}
