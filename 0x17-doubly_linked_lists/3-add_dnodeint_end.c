#include "lists.h"

/**
 * add-dnodeint_end - adds a new node at the end of a list
 * @head: head pointer
 * @n: data to be inputed
 *
 * Return: new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h, *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = temp;
	}
	else
		*head = temp;

	temp->prev = h;

	return (temp);
}
