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
	unsigned int i = 0;

	(void)idx;
	if (*head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	ptr = *head;

	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	}

	if (idx > i)
		return (NULL);
	
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	
	return (new);
}
