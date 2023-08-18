#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - fuction that frees memory allocated by nodes
 * @head: node
 * Return: Void
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
