#include "lists.h"

/**
 * sum_dlistint - function that sum all data in linked list
 * @head: node
 * Return: sum of data on sucess, 0 on failure
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
