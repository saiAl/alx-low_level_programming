#include "lists.h"

/**
 * add_dnodeint_end - function that add a Node at the end of a DLL
 * @head: the DLL
 * @n: the data
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = (dlistint_t *)malloc(sizeof(dlistint_t *));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	last = *head;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}

	while (last->next != NULL)
		last = last->next;
	last->next = new;
	new->prev = last;
	return (new);
}



