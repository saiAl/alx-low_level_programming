#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: the head ptr
 * @str: string Data of the node
 * Return: the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new, *ptr;
	unsigned int length = 0;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	while (str[length] != '\0')
		length++;

	new->len = length;
	new->str = strdup(str);
	new->next = NULL;

	ptr = *head;

	if (ptr == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;

		ptr->next = new;
	}
	return (new);
}
