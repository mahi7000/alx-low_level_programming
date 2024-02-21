#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * @head: pointer that points to the first node
 * @n: the number inputed in the new node
 *
 * Return: head
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp, *h;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->prev = NULL;
	temp->n = n;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	temp->next = h;

	if (h != NULL)
		h->prev = temp;

	*head = temp;

	return (*head);
}
