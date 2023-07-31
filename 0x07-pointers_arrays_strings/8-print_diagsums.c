#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - function
 * @a: pointer to int
 * @size: int
 */

void print_diagsums(int *a, int size)
{
	int i, j, k;

	i = 0;
	j = 0;

	for (k = 0; k < size; k++)
		i += a[k * size + k];

	for (k = size - 1; k >= 0; k--)
		j += a[k * size - k - 1];

	printf("%d, %d\n", i, j);
}
