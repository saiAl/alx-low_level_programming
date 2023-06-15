#include "main.h"
#include <stdlib.h>
/**
 *
 *
 *
 *
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
