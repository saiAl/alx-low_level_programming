#include "main.h"
#include <stdlib.h>

char *binary(unsigned long int n);

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: integer
 * @index: the postion of the bit
 * Return: the bit at the postion on success, or -1 on failure
 */

int get_bit(unsigned long int n, unsigned int index)
{
	char *s;
	unsigned int i, num;

	s = malloc(sizeof(char) * 32);
	s = binary(n);

	if (index >= 32 || index == NULL)
		return (-1);
	
	if (index == 0)
		return (0);

	for (i = index; ; i--)
	{
		if (i == 0)
		{
			num = s[i] - '0';
			break;
		}
	}
	free(s);
	return (num);
}

/**
 * binary - function that convert decimal to binary
 * @n: the integer to be converted
 * Return: a string of binary
 */

char *binary(unsigned long int n)
{
	unsigned long int m;
	int i, bits = 0, count = 0;
	char *bin;

	m = n;
	while (m > 0)
	{
		m = m >> 1;
		bits++;
	}

	bin = malloc(sizeof(char) * bits + 1);

	if (n == 0)
		bin = "0";
	else
		for (i = bits - 1; i >= 0; i--)
		{
			m = 1 << i;
			if (n & m)
			{
				bin[count] = '1';
				count += 1;
			}
			else
			{
				bin[count] = '0';
				count += 1;
			}
		}
	return (bin);
}

