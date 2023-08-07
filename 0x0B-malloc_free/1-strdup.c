#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function
 * @str: string
 * Return: pointer
 */

char *_strdup(char *str)
{
	int i, j;
	char *s;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	s = malloc(sizeof(char) * (i + 1));

	if (s == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		s[j] = str[j];

	return (s);
}
