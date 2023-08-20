#include "lists.h"
#include <stdlib.h>

/**
 *
 *
 *
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i;

	if ((*head) == NULL)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		tmp->next = NULL;
		free(tmp);
	}

	while (tmp != NULL)
	{
		i++;
		tmp = tmp->next;
		if (index > i)
			return (-1);
		if (i == index)
			break;
	}
	return (1);
}
