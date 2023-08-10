#include "main.h"
#include <stdlib.h>

/**
 * _memset - function
 * @s: string
 * @a: char
 * @num: unsigned int
 * Return: string
 */

char *_memset(char *s, char a, unsigned int num)
{
	unsigned int i;

	for (i = 0; i < num; i++)
		s[i] = a;

	return (s);
}

/**
 * _calloc - function that allocates memory for an array using malloc
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	_memset(p, 0, size * nmemb);

	return (p);
}
