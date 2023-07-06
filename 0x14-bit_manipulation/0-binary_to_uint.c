#include "main.h"
#include <string.h>
#include <stdlib.h>


int _pow(int base, int exp);

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: the binary number
 * Return: the decimal number on success
 */

unsigned int binary_to_uint(const char *b)
{
	int i, n, j;
	int len, rem, decimal = 0;

	if (b == NULL)
		return (-1);

	len = strlen(b);
	for (i = 0; i < len; i++)
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

	n = atoi(b);
	j = 0;
	while (n != 0)
	{
		rem = n % 10;
		n /= 10;
		decimal += rem * _pow(2, j);
		++j;
	}

	return (decimal);
}

/**
 * _pow - function that raised base to power of exp
 * @base: the base number
 * @exp: the raised power
 * Return: res on success
 */

int _pow(int base, int exp)
{
	int i, res = 1;

	for (i = 0; i < exp; i++)
		res *= base;

	return (res);
}
