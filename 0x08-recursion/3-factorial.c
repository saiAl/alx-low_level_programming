#include "main.h"
/**
 * factorial - return the factorial for an int
 * @n: param
 */

int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}

	n = n * (n - 1);
	n--;
	return n * factoiral;
}
