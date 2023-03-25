#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print numbers to 98.
 * @n: parameter for number given
 * Return: Always 0.
 */

void print_to_98(int n)
{

	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			_putchar(',');
			_putchar(' ');
		}
	}
}
