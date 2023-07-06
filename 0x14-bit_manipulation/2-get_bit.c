#include "main.h"


/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: integer
 * @index: the postion of the bit
 * Return: the bit at the postion on success, or -1 on failure
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 32)
		return (-1);

	return ((n >> index) & 1);
}
