#include "main.h"

#define ONE 1
#define ZERO 0

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to print it's binary form
 */

void print_binary(unsigned long int n)
{
	int i, bits = 0;
	unsigned long int m;

	m = n;
	while (m > 0)
	{
		m = m >> 1;
		bits++;
	}

	if (n == 0)
		_putchar(ZERO + '0');
	else
		for (i = bits - 1; i >= 0; i--)
		{
			m = 1 << i;
			if (n & m)
				_putchar(ONE + '0');
			else
				_putchar(ZERO + '0');
		}
}
