#include "main.h"

/**
 * flip_bits - flip
 * @n: first number
 * @m: second number
 *
 * Return: number of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int index;
	int i = 0;
	unsigned long int a, xor;

	xor = n ^ m;
	index = 63;
	while (index >= 0)
	{
		a = xor >> index;
		if (1 & a)
			i++;
		index--;
	}
	return (i);

}
