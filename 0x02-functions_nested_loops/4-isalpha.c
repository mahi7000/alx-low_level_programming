#include "main.h"

/**
 * _isalpha - function
 * @c - char to be tested
 * Return: 1 if letter lowercase or uppercase, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
