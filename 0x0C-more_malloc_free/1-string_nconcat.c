#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function
 * @s1: char
 * @s2: char
 * @n: unsigned int
 * Return: point to a newly allocated space in memory which contains s1, followed by the first n bytes of s2 and null terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j;
	unsigned int n1 = 0, n2 = 0;

	while (s1[n1] != '\0')
		n1++;

	while (s2[n2] != '\0')
	{
		n2++;
	}
		
	if (n >= n2)
		p = malloc(sizeof(char) * (n1 + n2 + 1));
	else
		p = malloc(sizeof(char) * (n1 + n + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < n1; i++)
	{
		p[i] = s1[i];
	}

	j = 0;
	while (n < n2 && i < (n1 + n))
		p[i++] = s2[j++];

	while (n >= n2 && i < (n1 + n2))
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	
	p[i] = '\0';

	return (p);
}
