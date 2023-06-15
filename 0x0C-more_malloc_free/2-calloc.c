#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocate memory for an array
 * @nmemb: number of elements of an array
 * @size: size of the array
 * Return: array intilize to 0, NULL on falure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(sizeof(size) * nmemb);

	if (array)
		for (i = 0; i < nmemb; i++)
			array[i] = 0;
	else
		return (NULL);
	return (array);
}
