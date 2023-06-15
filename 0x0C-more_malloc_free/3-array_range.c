#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that create an array of integers
 * @min: minimum integer
 * @max: minimum integer
 * Return: new created array, NULL on falure
 */

int *array_range(int min, int max)
{
	int i, size;
	int *array;

	if (min > max)
		return (NULL);

	for (size = 0; min <= max; size++)
		min++;

	array = malloc(sizeof(int) * size);

	if (array)
	{
		i = 0;
		while (min <= max)
		{
			array[i] = min;
			min++;
			i++;
		}
	}
	else
		return (NULL);

	return (array);
}
