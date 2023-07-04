#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - added data at the end of linked list
 * @head: double pointer point to the head of the list
 * @n: new data to added
 * Return: the new data added
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = (listint_t *) malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	last = *head;
	if (last == NULL)
		*head = new;
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (new);
}
