#include "main.h"

/**
 * print_sign - function
 * @n: int
 * Return: 1 if greater than 0, 0 equal to 0, -1 if less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
