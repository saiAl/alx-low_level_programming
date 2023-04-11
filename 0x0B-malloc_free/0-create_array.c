#include "main.h"
#include "stdlib.h"

/**
 * Create_array - function that create an array using malloc.
 * @c: character
 * @size: size of the array
 * Return: NULL or pointer
 */

char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size != 0)
	{
		arr = malloc(sizeof(char) * size);
		arr[0] = c;
		return (arr);
	}
	else
	{
		return(NULL);
	}

}
