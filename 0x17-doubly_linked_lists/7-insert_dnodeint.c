#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - insert node at given postion
 * @idx: postion
 * @n: node data
 * Return: node on success, NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;

	current = *h;

	i = 0;
	while (i < idx)
	{
		current = current->next;
		i++;
	}


	new->prev = current->prev;
	current->prev = new;
	new->next = current;

	if (new->prev != NULL)
		new->prev->next = new;
	else
		*h = new;

	return (new);
}
