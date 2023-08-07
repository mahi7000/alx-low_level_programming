#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function
 * @ac: int
 * @av: char
 * Return: char
 */

char *argstostr(int ac, char **av)
{
	char **s;

	if (ac == 0 || av == NULL)
		return (NULL);
	
	s = malloc(sizeof(char **) * ac);

	return (*s);
}
