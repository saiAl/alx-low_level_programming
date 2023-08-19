#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - function that get node at specific index
 * @head: node
 * @index: node index
 * Return: node on success, NULL on failure
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head->next != NULL)
	{
		head = head->next;
		i++;
		if (i == index)
			break;
	}

	if (i > index)
		return (NULL);

	return (head);
}
