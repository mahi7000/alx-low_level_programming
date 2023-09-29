#include "main.h"

/**
 * get_endianness - check the endianness
 *
 * Return: 0 or 1
 */

int get_endianness(void)
{
	int i;
	char *end;

	end = "Little Endian";

	for (i = 0; end[i]; i++)
		_putchar(end[i]);

	return (1);
}
