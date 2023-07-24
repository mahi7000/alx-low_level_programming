#include "main.h"

/**
 * puts_half - function
 * @str: char
 */

void puts_half(char *str)
{
	int l, x;
	int y;

	l = 0;

	for (x = 0; str[x] != '\0'; x++)
	{
		l++;
	}
	y = (l / 2);

	if ((l % 2) == 1)
	{
		y = ((l + 1) / 2);
	}

	for (x = y; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}
