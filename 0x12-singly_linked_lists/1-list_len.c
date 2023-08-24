#include "lists.h"
#include <stdlib.h>

/**
 * list_len - counts number
 * @h: pointer to integer
 *
 * Return: num
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
