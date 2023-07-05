#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - function that add nodes to a linked list
 * @head: the head node in the linked list
 * @str: the new string to be added
 * Return: the new string on seccuss, NULL on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len;

	len = strlen(str);
	new = (list_t *) malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
