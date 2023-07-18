#include "main.h"

/**
 * times_table - function
 */

void times_table(void)
{
	int i, j, r;

	i = 0;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			r = i + j;
			_putchar(r);
			_putchar(',');
			_putchar(' ');
			j++;
		}
		i++;
		_putchar('\n');
	}
}
