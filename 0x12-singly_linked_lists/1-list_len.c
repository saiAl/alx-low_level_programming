#include "lists.h"

/**
 * list_len - print the length of node
 * @h: a Node
 * Return: the length of the node
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
