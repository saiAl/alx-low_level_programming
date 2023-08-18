#include "lists.h"

/**
 * get_dnodeint_at_index - retrive index in nth index
 * @head: node
 * @index: the number of index
 * Return: return node on success, NULL on failure
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current;

	while (head != NULL)
	{
		head = head->next;
		i++;
		if (i == index || head == NULL)
		{
			current = head;
			break;
		}
	}

	return (current);
}
