#include "main.h"
#include <stdlib.h>

/**
 * _calloc - create array
 * @nmemb: number of element
 * @size: size of array
 * Return: none
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *c;

	if (nmemb == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	c = ptr;
	for (i = 0; i < (nmemb + size); i++)
		c[i] = 0;

	return (ptr);
}
