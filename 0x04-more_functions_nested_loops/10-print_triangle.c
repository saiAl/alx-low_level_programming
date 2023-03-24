#include "main.h"

/**
 * print_triangle - function that print triangle
 * @size: parameter
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size < 0 || size == 0)
	{
		_putchar('\n');
	}
	else
	{

		for (i = 1; i <= size; i++)
		{
			for (j = size; j > i; j--)
			{
				_putchar(' ');
			}
			for (k = 1; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
