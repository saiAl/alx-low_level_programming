#include "lists.h"

/**
 * dlistint_len - function that return the size of DLL
 * @h: the DLL
 * Return: size of the DLL on Success, NULL on Failure
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}
