#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: string of 0 and 1 chars
 *
 * Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int deci, i;

	deci = 0;
	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);

		deci = deci << 1;
		if (b[i] == '1')
			deci += 1;
	}

	return (deci);
}
