#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a DLL
 * @head: the DLL
 * @index: index of the node
 * Return: the nth node on Success, NULL on failure
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *ptr;

	if (!head)
		return (NULL);

	ptr = head;

	for (i = 0; i < index; i++)
		ptr = ptr->next;

	return (ptr);
}
