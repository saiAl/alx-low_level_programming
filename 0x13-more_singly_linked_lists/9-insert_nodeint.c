#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert ay given postion
 * @head: node
 * @idx: index to insert node in
 * @n: node data
 * Return: node on success, NULL on failure
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *ptr, *current;
	unsigned int length = 0;
	int data;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	
	ptr = *head;
	current = *head;

	while (ptr != NULL)
	{
		length++;
		if (length == idx)
			data = ptr->n;
		ptr = ptr->next;
	}
	
	if (idx > length)
		return (NULL);

	while (current->n != data)
		current = current->next;

	new->n = n;
	if (idx == 0 || *head == NULL)
	{
		new->next = *head;
		*head = new;
	}
	
	new->next = current->next;
	current->next = new;

	return (new);
}
