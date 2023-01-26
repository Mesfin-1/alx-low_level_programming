#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end
 * of a list_t list.
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 * Return: If the function fails - NULL.
 * Otherwise - the address of the new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *d;
	int l;
	list_t *n, *la;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	d = strdup(str);
	if (str == NULL)
	{
		free(n);
		return (NULL);
	}

	for (l = 0; str[l];)
		l++;
	n->str = d;
	n->len = l;
	n->next = NULL;

	if (*head == NULL)
		*head = n;

	else
	{
		la = *head;
		while (la->next != NULL)
			la = la->next;
		la->next = n;
	}

	return (*head);
}
