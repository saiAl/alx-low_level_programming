#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all n
 * @head: the DLL
 * Return: the sum on Success, 0 on failure
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
