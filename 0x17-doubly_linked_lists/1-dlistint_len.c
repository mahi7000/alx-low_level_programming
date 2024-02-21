#include "lists.h"

/**
 * dlistint_len - counts the number of elements in a linked list
 * @h: head pointer that points to the first node
 *
 * Return: the number of elemnts
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
