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
	dlistint_t *new, *current, *last;
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

	last = current->prev;
	last->next = new;

	new->next = current;
	new->prev = last;

	current->prev = new;

	return (new);
}
