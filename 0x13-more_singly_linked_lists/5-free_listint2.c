#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees likned list
 * @head: node
 * Return: Void
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

	*head = NULL;
}
