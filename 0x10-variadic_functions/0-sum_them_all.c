#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that sums all of its param
 * @n: number to sum
 * Return: the sum of all the args passed to the function
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	unsigned int res = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
		res += va_arg(args, unsigned int);

	va_end(args);
	return (res);
}
