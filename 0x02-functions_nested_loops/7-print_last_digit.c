#include "main.h"

/**
 * print_last_digit - function that print the last digit of givin number.
 *
 * @n: parameter for a the number given.
 *
 * Return: Always n.
 */

int print_last_digit(int n)
{
	if (n >= 0 && n <= 9)
	{
		return (n);
	}
	else
	{
		n = _abs(n % 10);
		return (n);
	}
}
