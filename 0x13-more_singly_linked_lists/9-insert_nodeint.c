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
	listint_t *new, *ptr;
	unsigned int i = 1;

	if (*head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	ptr = *head;

	while (ptr->next != NULL)
	{
		i++;
		ptr = ptr->next;
		if (i == idx)
			break;
	}

	if (ptr == NULL)
		return (NULL);

	new->n = n;
	new->next = ptr->next;
	ptr->next = new;
	*head = new;

	return (new);
}
