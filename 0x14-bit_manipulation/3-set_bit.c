#include "main.h"
#include <stdlib.h>


/**
 * set_bit -  function that sets the value of a bit to 1 at a given index.
 * @n: pointer to an integer
 * @index: the postion of the bit
 * Return: the bit at the postion on success, or -1 on failure
 */


int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 32)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
