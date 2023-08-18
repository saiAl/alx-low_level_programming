#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *add_dnodeint_end - function that add node at the end
 * @head: node
 * @n: data
 * Return: Node on success, NULL on failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->prev = NULL;
	new->next = NULL;
	new->n = n;

	last = *head;
	if (last == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = new;
		new->prev = last;
	}
	return (new);
}
