#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - function that frees linked list
 * @head: Node
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
