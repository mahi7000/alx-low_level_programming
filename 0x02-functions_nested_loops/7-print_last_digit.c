#include "main.h"

/**
 * print_last_digit - function
 * @r: int
 * Return: last digit
 */

int print_last_digit(int r)
{
	int n;
	
	if (r < 0)
	{
		r = -r;
	}

	n = r % 10;
	return (n);
}
