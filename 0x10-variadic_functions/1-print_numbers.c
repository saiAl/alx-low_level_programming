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
	for (i = 0; i < n; i++)
		if (separator)
		{
			if (i < (n - 1))
				printf("%d%s", va_arg(args, unsigned int), separator);
			else
				printf("%d\n", va_arg(args, unsigned int));
		}

	va_end(args);
}
