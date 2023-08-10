#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function
 * @ptr: void
 * @old_size: unsigned int
 * @new_size: unsigned int
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *ptr2;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);


	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	i = 0;

	ptr1 = malloc(sizeof(char));
	ptr2 = malloc(sizeof(char));

	ptr1[i] = 'a';
	ptr2[i] = 'b';

	free(ptr);
	return (ptr1);
}
