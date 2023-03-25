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
	int last;

	if (n >= 0)
	{
		last = n % 10;
		_putchar(last + '0');
		return (last);
	}
	else
	{
		n = n * -1;
		last = n % 10;
		_putchar(last + '0');
		return (last);
	}
}
