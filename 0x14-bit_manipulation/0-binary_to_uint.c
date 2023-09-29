#include "main.h"

/**
 * binary_to_uint - convert binary number to unsigned int
 * @b: binary number
 *
 * Return: convert or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int convert;
	unsigned int i;

	if (!b)
		return (0);

	convert = 0;
	i = 0;
	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		convert = 2 * convert + (b[i] - '0');
		i++;
	}

	return (convert);
}
