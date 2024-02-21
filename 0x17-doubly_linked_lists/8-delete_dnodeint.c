#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: head pointer
 * @index: index
 *
 * Return: 1 or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *h, *h2;

	h = *head;

	if (h != NULL)
		while (h->prev != NULL)
			h = h->prev;

	i = 0;
	while (h != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = h->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h2->next = h->next;
				if (h->next != NULL)
					h->next->prev = h2;
			}

			free(h);
			return (1);
		}
		h2 = h;
		h = h->next;
		i++;
	}

	return (-1);
}
