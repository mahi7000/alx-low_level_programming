#include "main.h"

/**
 * _islower - checks for lowercase letters
 * @c: char to be checked
 * Return: 1 if c is lowercase otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
