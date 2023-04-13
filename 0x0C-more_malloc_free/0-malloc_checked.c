#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - function check for space.
 * @b: param
 * Return: 98 on failure
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr != NULL)
	{
		return (ptr);
	}
	else
	{
		exit(98);
	}
}
