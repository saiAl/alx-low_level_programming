#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dlistint - function that prints all elements
 * @h: the list
 * Return: the elements count
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i, count = 0;

	if (h)
		for (i = 0; h; i++)
			if (h[i].n)
			{
				printf("%d\n", h[i].n);
				count++;
				if (h[i].next)
				{
					printf("%d\n", h[i].next->n);
					count++;
				}
				break;
			}
	return (count);

}
