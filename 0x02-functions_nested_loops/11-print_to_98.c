#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print numbers to 98.
 * @n: parameter for number given
 * Return: Always 0.
 */

void print_to_98(int n)
{

	if (n >= 98)
	{
		if (n == 98)
		{
			printf("%d", n);
		}
		else
		{
			for (; n >= 98; n--)
			{
				printf("%d", n);
				if (n > 98)
				{
					printf(", ");
				}
			}
		}
	}
	else
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n < 98)
			{
				printf(", ");
			}
		}
	}
	putchar('\n');
}
