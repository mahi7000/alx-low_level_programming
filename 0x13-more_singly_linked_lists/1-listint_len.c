#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * @h: struct
 *
 * Return: size of list
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
