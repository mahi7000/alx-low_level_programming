#include "main.h"

/**
 * print_to_98 - function
 */

void print_to_98(int n)
{
	int p, q;

	if (n <= 98)
	{
		for (p = n; p <= 98; p++)
		{
			if (p < 98)
			{
				_putchar(p);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(p);
				_putchar('\n');
			}
		}
	}
	else if (n > 98)
	{
		for (q = n; q > 98; q--)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}

	}
}
