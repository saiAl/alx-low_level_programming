#include "main.h"
#include "stdlib.h"

/**
 * create_array - function that create an array using malloc.
 * @c: character
 * @size: size of the array
 * Return: NULL or pointer
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i;

	if (size != 0)
	{
		arr = malloc(sizeof(char) * size);
		if (arr == NULL)
		{
			return (NULL);
		}
		i = 0;
		while (i < size)
		{
			arr[i] = c;
			i++;
		}

		return (arr);
	}
	else
	{
		return (NULL);
	}

}
