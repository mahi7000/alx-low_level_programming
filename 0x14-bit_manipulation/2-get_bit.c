#include "main.h"

/**
 * get_bit - value of a bit at a given index
 * @n: number
 * @index: indes
 *
 * Return: value of bit or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 65)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
