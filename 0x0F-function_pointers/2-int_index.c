#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - function that searchs for an integer
 * @array: arrays of integer
 * @size: size if the array
 * @cmp: pointer function
 * Return: -1 if size is <= 0 or no match, on seccuss return index num
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, c, value;

	if (size <= 0)
		return (-1);

	if (cmp == NULL || array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		c = cmp(array[i]);
		if (c == 1)
		{
			value = i;
			break;
		}
		if (i == (size - 1))
			return (-1);
		}

	return (value);
}
