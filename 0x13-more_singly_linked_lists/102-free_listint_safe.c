#include "lists.h"

/**
 * free_listint_safe - function
 * @h: head
 *
 * Return: size_t
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count;

	count = (*h)->n;
	return (count);
}
