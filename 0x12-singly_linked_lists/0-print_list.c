#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints list
 * @h: pointer to list
 *
 * Return: number
 */

size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		if (!(h->str))
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		a++;
	}
	return (a);
}
