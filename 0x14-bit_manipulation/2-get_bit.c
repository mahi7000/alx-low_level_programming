#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: is the number
 * @index: is the index
 *
 * Return: 0 or 1 at given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int num_at_index;

	n = n >> index;

	if (n % 2 == 0)
		num_at_index = 0;
	else
		num_at_index = 1;	

	return (num_at_index);
}
