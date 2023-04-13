#include "mian.h"
#include <stdlib.h>

/**
 * malloc_checked - function check for space.
 * @b: param
 * Return: 98 on failure
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(b));

	if (ptr != NULL)
	{
		return (ptr);
	}
	else
	{
		exit(98);
	}
}
