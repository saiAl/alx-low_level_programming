#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - function that add node to a linked list
 * @head: double pointer which point to the head of the linked list
 * @n: the data which be added to the linked list
 * Return: the new data added
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = (listint_t *) malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
