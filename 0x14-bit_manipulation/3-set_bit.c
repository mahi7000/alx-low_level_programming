#include "main.h"

/**
 * set_bit - set the value of a bit to 1
 * @n: number
 * @index: index
 *
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int val = 1;

	if (index > 65)
		return (-1);

	*n = (val << index) | *n;
	return (1);
}
