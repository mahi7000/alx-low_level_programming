#include "main.h"

/**
 * print_rev - function
 * @s: character
 */

void print_rev(char *s)
{
	int x;
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	s--;
	for (x = l; x > 0; x--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
