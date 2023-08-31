#include "main.h"

/**
 * flip_bits - flip bits
 * @n: int
 * @m: int
 *
 * Return: int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j = 0;
	unsigned long int sum;
	unsigned long int nor = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		sum = nor >> i;
		if (sum & 1)
			j++;
	}
	return (j);
}
