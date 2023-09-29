#include "main.h"

/**
 * print_binary - convert number into binary
 * @n: number
 *
 */

void print_binary(unsigned long int n)
{
	int i, j;
	unsigned long int m;

	j = 0;
	i = 63;
	while (i >= 0)
	{
		m = n >> i;

		if (1 & m)
		{
			_putchar('1');
			j++;
		}
		else if (j)
			_putchar('0');
		i--;
	}
	if (!j)
		_putchar('0');
}
