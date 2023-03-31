#include "main.h"

/**
 * reverse_array - function that reverse array
 * @a: param for array
 * @n: param for numbers in array
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
	int temp;
	int start;
	int end;

	end = n - 1;

	for (start = 0; start < end; start++)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		end--;
	}
}
