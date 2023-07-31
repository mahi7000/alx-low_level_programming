#include "main.h"

/**
 * _strchr - function
 * @s: pointer to char
 * @c: char
 * Return: s or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
