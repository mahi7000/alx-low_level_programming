#include "lists.h"

/**
 * add_nodeint_end - add node at the end
 * @head: pointer
 * @n: data
 *
 * Return: pointer to new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *temp;

	temp = *head;
	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = ptr;

	return (ptr);
}
