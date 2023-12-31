#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flipper, xor;

	flipper = 0;
	xor = n ^ m;
	while (xor)
	{
		if ((xor & 1) == 1)
			flipper += 1;
		xor >>= 1;
	}

	return (flipper);
}
