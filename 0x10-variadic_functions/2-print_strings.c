#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that print strings
 * @separator: separate between strings
 * @n: numbers of arguments
 * Return: void function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
		if (separator)
		{
			if (i < n - 1)
				printf("%s%s", va_arg(args, char*), separator);
			else
				printf("%s\n", va_arg(args, char*));
		}

	va_end(args);
}
