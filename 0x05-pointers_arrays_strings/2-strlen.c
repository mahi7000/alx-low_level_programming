#include "stdio.h"

/**
 * _strlen - function
 * @s: character
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
