#include "main.h"

/**
 * _isupper - function that checks for upper case.
 * @c: parametr
 * Return: 1 on success.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
