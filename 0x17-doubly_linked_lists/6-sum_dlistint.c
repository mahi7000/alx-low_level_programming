#include "lists.h"

/**
 * sum_dlistint - sums up all the data of a linked list
 * @head: head pointer
 *
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);

	while (head->prev != NULL)
		head = head->prev;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
