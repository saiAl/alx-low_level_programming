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

	
	if ((*head) == NULL)
		return (0);
	
	tmp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		tmp->next = NULL;
		free(tmp);
	}
	return (0);
}
