#include "main.h"

/**
 * _prime - function
 * @n: int
 * @i: int
 * Return: int
 */

int _prime(int n, int i);

/**
 * is_prime_number - function
 * @n: int
 * Return: int
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, n - 1));
}

int _prime(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0 && i > 0)
		return (0);
	return (_prime(n, i - 1));
}	
