#include "search_algos.h"

/**
 * binary_search - searches for value in sorted array
 * @array: the sorted array
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: index where value is located or -1
 */

int binary_search(int *array, size_t size, int value)
{
	int low, high, mid, i;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		printf("Searching in array: ");
		i = low;
		while (i <= high)
		{
			if (i == high)
				printf("%d\n", array[high]);
			else
				printf("%d, ", array[i]);
			i++;
		}
		mid = low + (high - low) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}
