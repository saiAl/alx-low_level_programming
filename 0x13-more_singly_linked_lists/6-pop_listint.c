#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - fuction that delete head node
 * @head: node
 * Return: data inside the node
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int value;

	if (*head == NULL)
		return (0);

	current = *head;
	value = current->n;

	*head = current->next;
	free(current);

	return (value);
}
