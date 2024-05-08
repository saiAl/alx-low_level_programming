#include "search_algos.h"
#include <stdio.h>

void _print(size_t idx, size_t end, int *array);

/**
 * binary_search - searches for a value in a sorted array of integers.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: the value searched for.
 * Return: the first index where value is located on success
 * ** owtherwise -1
 */


int binary_search(int *array, size_t size, int value)
{
	size_t end, start, mid;

	end = size - 1;
	start = 0;

	_print(0, end, array);
	while (end >= start)
	{

		mid = (start + end) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;

		if (end >= start)
			_print(start, end, array);
	}

	return (-1);
}


/**
 * _print - function to print the array
 * @idx: the start index
 * @end: the last index
 * @array: the array to print
 */

void _print(size_t idx, size_t end, int *array)
{

	printf("Searching in array:");
	while (idx <= end)
	{
		printf(" %d", array[idx]);
		if (idx != end)
			printf(",");
		idx++;
	}
	printf("\n");

}
