#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head pointer
 * @idx: index
 * @n: data
 *
 * Return: new node address
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *head;
	unsigned int i;

	if (*h == NULL)
		return (NULL);

	if (idx == 0)
		temp = add_dnodeint(h, n);
	else
	{
		head = *h;
		i = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					temp = add_dnodeint_end(h, n);
				else
				{
					temp = malloc(sizeof(dlistint_t));
					if  (temp != NULL)
					{
						temp->n = n;
						temp->next = head->next;
						temp->prev = head;
						head->next->prev = temp;
						head->next = temp;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}
	return (temp);
}
