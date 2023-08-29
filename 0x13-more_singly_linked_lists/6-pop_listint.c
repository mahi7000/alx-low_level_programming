#include "lists.h"

/**
 * pop_listint - deletes head node
 * @head: pointer
 *
 * Return: head nodes data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!head || !(*head))
		return (0);

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
