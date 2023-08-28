#include "lists.h"

/**
 * add_nodeint - adds new node at beginning
 * @head: pointer
 * @n: data
 *
 * Return: address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));

	ptr->n = n;
	ptr->next = NULL;

	if (!ptr)
		return (NULL);

	ptr->next = *head;
	*head = ptr;
	return (*head);
}
