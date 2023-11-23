#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: pointer to a integer
 * @index: index
 *
 * Return: 1 0r -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);

	*n = *n & (~(1 << index));

	return (1);
}
