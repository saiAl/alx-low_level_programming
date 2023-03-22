#include "main.h"

/**
 * print_last_digit - function that print the last digit of givin number.
 *
 * @n: parameter for a the number given.
 *
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	n = n % 10;
	_putchar(n);
	return (n);
}
