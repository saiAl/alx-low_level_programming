#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - function that add node at the beginning
 * @head: the linked list
 * @n: the date to be added
 * Return: new Node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);
	new->next = *head;
	new->prev = NULL;
	new->n = n;
	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}
