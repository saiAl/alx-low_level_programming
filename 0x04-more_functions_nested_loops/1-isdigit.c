#include "main.h"

/**
 * _isdigit - function checks for digits.
 * @c: parameter
 * Return: 1 on success.
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
