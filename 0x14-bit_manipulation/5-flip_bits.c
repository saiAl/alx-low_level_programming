#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip.
 * @n: first number
 * @m: second number
 * Return: the count of the bits needed.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count, res;

	count = 0;
	res = 0;

	res = n ^ m;

	while (res > 0)
	{
		if ((res & 1) == 1)
			count++;

		res = res >> 1;
	}

	return (count);
}
