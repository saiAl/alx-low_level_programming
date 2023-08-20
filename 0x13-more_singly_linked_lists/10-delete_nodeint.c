#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete a node from a linked list
 * @head: node
 * @index: node postion
 * Return: 1 on success, 0 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i = 0;

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
