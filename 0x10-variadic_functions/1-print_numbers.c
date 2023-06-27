#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that print numbers
 * @separator: separate numbers
 * @n: numbers to print
 * Return: void function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;


	va_start(args, n);

	if (n == 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < n; i++)
	{
		if (i < (n - 1))
		{
			if (!separator)
				printf("%d", va_arg(args, unsigned int));
			else
				printf("%d%s", va_arg(args, unsigned int), separator);
		}
		else
			printf("%d", va_arg(args, unsigned int));

		if (i == (n - 1))
			printf("\n");
	}
	va_end(args);
}
