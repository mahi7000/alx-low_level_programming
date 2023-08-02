#include "main.h"

/**
 * _sqrt_recursion - function
 * @n: int
 * Return: int
 */

int _sqrt(int n, int i);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}

/**
 * _sqrt - function
 * @n: int
 * @i: int
 * Return: int
 */

int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
