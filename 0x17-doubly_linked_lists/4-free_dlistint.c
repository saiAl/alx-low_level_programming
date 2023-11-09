#include "lists.h"

/**
 * free_dlistint - function that frees a DLL
 * @head: the DLL
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
