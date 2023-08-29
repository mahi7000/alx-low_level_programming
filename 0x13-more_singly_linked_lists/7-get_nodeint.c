#include "lists.h"

/**
 * get_nodeint_at_index - return nth node of list
 * @head: pointer
 * @index: index
 *
 * Return: data
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *temp = head;

	count = 0;
	while (temp && count < index)
	{
		temp = temp->next;
		count++;
	}
	return (temp ? temp : NULL);
}
