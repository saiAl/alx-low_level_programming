#include "main.h"
#include <stdio.h>

/**
 * print_array - print array elements to stdout
 * @n: param number of elements
 * @a: param pointer
 *  Return: Always 0.
 */

void print_array(int *a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
