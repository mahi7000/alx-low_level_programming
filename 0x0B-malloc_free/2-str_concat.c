#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function
 * @s1: char
 * @s2: char 
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (s1[i] != '\0')
		i++;

	j = 0;
	while (s2[j] != '\0')
		j++;

	s = malloc(sizeof(char) * (i + j + 1));

	if (s == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	
	j = 0;
	while (s2[j] != '\0')
	{
		s[i] = s2[j];
		j++;
		i++;
	}

	s[i] = '\0';

	return (s);
}
