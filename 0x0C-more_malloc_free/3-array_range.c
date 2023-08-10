#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creaetes an array of integers
 * @min: int
 * @max: int
 * Return: array
 */

int *array_range(int min, int max)
{
	int *a;
	int i;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(int) * ((max - min) + 1));

	if (a == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		a[i] = min;
		min++;
	}

	return (a);
}
