#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number base 10
 *
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << 31;
	int leading_zeros = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask)
	{
		if (n & mask)
		{
			leading_zeros = 0;
			_putchar('1');
		}
		else if (!leading_zeros)
			_putchar('0');

		mask >>= 1;
	}
}
