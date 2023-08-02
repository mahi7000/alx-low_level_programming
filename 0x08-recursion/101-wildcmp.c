#include "main.h"

/**
 * wildcmp - function
 * @s1: string
 * @s2: string
 * Return: int
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
		return (1);
	else
		return (0);
}
