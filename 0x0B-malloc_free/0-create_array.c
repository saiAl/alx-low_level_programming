#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates array and initilzes it.
 * @size: param
 * @c: param
 * Return: pointer to array.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);
	
	ptr = malloc(sizeof(char) * size);

	if (!ptr)
		return (NULL);
	else
		for (i = 0; i < size; i++)
			ptr[i] = c;
	return (ptr);
}
