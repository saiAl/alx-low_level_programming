#include "lists.h"

/**
 * print_listint - function theat print all elements of a list
 * @h: node
 * Return: the count of the elements inside the linked list.
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
