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
	unsigned int i = 0, count = 0;
	listint_t *current, *ptr;

	current = head;

	ptr = head;
	while (ptr->next != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	if (index > count)
		current = NULL;
	else
	{
		if (index == 0)
			return (head);

		while (current->next != NULL)
		{
			if (i == index)
				break;
			current = current->next;
			i += 1;
		}
	}

	return (current);
}
