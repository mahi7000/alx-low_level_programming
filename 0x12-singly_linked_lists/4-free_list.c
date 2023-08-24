#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees linked list
 * @head: list_t list
 */

void free_list(list_t *head)
{
	list_t *m;

	while (head)
	{
		m = head->next;
		free(head->str);
		free(head);
		head = m;
	}
}
