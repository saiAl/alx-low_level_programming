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
	char *str;

	if (n == 0)
	{
		putchar('\n');
		return;
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);
		if (str == NULL)
			str = "(nill)";
		if (separator)
		{
			if (i < (n - 1))
				printf("%s%s", str, separator);
			else
				printf("%s", str);

		}
		else
			printf("%s", str);

		if (i == (n - 1))
			putchar('\n');
	}
	va_end(args);
}
