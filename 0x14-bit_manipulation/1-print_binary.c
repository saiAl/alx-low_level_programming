#include "main.h"
#include <stdio.h>

#define ONE 1
#define ZERO 0

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to print it's binary form
 */

void print_binary(unsigned long int n)
{
	unsigned long int i;
	int bits;

	if (n <= 9)
		bits = 1;
	else if (n <= 99)
		bits = 7;
	else
		bits = 11;

	for (i = 1UL << (bits - ONE); i > ZERO; i >>= ONE)
		(n & i) ? _putchar(ONE + '0') : _putchar(ZERO + '0');
}
