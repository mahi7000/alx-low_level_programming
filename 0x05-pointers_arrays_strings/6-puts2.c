#include "main.h"

/**
 * puts2 - function
 * @str: char
 */

void puts2(char *str)
{
	int l = 0;
	int x = 0;
	char *y = str;
	int s;

	while (*y != '\0')
	{
		y++;
		l++;
	}
	x = l - 1;
	for (s = 0; s <= x; s++)
	{
		if (s % 2 == 0)
		{
			_putchar(str[s]);
		}
	}
	_putchar('\n');
}

