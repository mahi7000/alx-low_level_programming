#include "lists.h"

/**
 * insert_nodeint_at_index - function
 * @head: pointer
 * @idx: index
 * @n: data
 *
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *ptr;
	listint_t *temp = *head;

	ptr = malloc(sizeof(listint_t));
	if (!ptr || !head)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}

	for (count = 0; temp && count < idx; count++)
	{
		if (count == idx - 1)
		{
			ptr->next = temp->next;
			temp->next = ptr;
			return (ptr);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
