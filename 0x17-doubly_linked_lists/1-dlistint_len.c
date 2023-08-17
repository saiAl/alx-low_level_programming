#include "lists.h"

/**
 * dlistint_len - function that count all elements
 * @h: the list
 * Return: the elements count
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i, count = 0;

	if (h)
		for (i = 0; h; i++)
			if (h[i].n)
			{
				count++;
				if (h[i].next)
					count++;
				break;
			}
	return (count);

}
