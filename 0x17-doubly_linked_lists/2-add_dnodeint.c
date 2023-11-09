#include "lists.h"

/**
 * add_dnodeint - function that add a new node aat the beginning of DLL
 * @head: the DLL
 * @n: the data
 * Return: the address of the new element on Success, NULL on Failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = (dlistint_t *)malloc(sizeof(dlistint_t *));
	if (!new)
		return (NULL);

	new->n = n;

	if (*head == NULL)
		*head = new;
	else
	{
		new->next = *head;
		(*head)->prev = new;
		(*head) = new;
	}
	return (new);
}
