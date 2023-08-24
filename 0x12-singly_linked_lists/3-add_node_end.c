#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - function
 * @head: head
 * @str: string
 *
 * Return: address or null
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *m = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->len = len;
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}

	while (m->next)
		m = m->next;

	m->next = n;

	return (n);
}
