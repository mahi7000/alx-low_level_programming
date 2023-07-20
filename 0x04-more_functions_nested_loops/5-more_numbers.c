#include "main.h"

/**
 * more_numbers - function
 */

void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				_putchar('1');
			}
			_putchar(j % 10 + '0');
		}
		i++;
		_putchar('\n');
	}
}
