#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocate memory
 * @b: the amount of memory to allocate
 * Return: allocated memory, 98 on falure
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(b);

	if (!ptr)
		exit(98);
	else
		return (ptr);

}
