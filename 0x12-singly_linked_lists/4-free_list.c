#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that release all the memory allocated by nodes
 * @head: a node
 * Return: Void
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		free(head->str);
		head = head->next;
		free(current);
	}
}
