#include "main.h"

/**
 * reverse_array - function
 * @a: int
 * @n: int
 */

void reverse_array(int *a, int n)
{
	int i;
	int s;

	i = 0;
	while (i < n--)
	{
		s = a[i];
		a[i] = a[n];
		a[n] = s;
		i++;
	}
}
