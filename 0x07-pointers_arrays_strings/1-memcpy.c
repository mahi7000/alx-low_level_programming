#include "main.h"

/**
 * _memcpy - function
 * @dest: pointer to char
 * @src: pointer to char
 * @n: unsigned int
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, j;
	j = n;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
