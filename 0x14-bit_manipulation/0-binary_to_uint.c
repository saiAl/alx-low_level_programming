#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: the binary number
 * Return: the decimal number on success
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int len, pow = 1, res = 0;

	if (b == NULL)
		return (0);

	len = strlen(b);
	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] == '1')
			res += pow;
		else if (b[i] != '0')
			return (0);
		pow <<= 1;
	}

	return (res);
}
