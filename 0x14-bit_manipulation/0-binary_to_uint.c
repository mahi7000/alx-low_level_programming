#include "main.h"

/**
 * binary_to_uint - convert binary number to unsigned int
 * @b: char
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int sum = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		sum = sum * 2 + (b[i] - '0');
	}
	return (sum);
}
