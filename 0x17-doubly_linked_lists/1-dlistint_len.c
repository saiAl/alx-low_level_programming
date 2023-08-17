#include "lists.h"

/**
 * dlistint_len - function that count all elements
 * @h: the list
 * Return: the elements count
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	
	return (count);

}
