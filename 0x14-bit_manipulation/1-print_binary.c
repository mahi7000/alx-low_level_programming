#include "main.h"

/**
 * print_binary - print binary
 * @n: binary
 */

void print_binary(unsigned long int n)
{
	int i, j = 0;
	unsigned long int sum;

	for (i = 63; i >= 0; i--)
	{
		sum = n >> i;
		if (sum & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
			_putchar('0');
	}
	if (!j)
		_putchar('0');
}
