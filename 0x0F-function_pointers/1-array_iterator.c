#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a param
 * @array: array of integers
 * @size: size of the array
 * @action: a function pointer with one arguments
 * Return: void function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
