#include "main.h"

/**
 * factorial - function that calculate the factorial of a given number
 * @n: param
 * Return: the number factorial
 */

int factorial(int n)
{
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));

}
