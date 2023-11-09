#include "lists.h"

/**
 * print_dlistint - print elements of a DLL and return the size of the list.
 * @h: the DLL
 * Return: size of the DLL on Success, NULL of Failure.
 */


size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}

	return (size);
}
