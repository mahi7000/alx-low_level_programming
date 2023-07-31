#include "main.h"

/**
 * _strspn - function
 * @s: pointer to char
 * @accept: pointer to char
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int j = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				j++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return(j);
		}
		s++;
	}
	return (j);
}
