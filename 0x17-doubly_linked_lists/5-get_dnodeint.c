#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: head pointer
 * @index: index
 *
 * Return: node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i, size = 0;

	while (head->prev != NULL)
		head = head->prev;

	ptr = head;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		size++;
	}

	if (index >= size)
		return (NULL);

	for (i = 0; i < index; i++)
		head = head->next;

	return (head);
}
