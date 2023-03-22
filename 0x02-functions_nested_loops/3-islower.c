#include "main.h"

/**
 * _islower - function that checks if a letter is lowerCase
 * @c: is the character being checked.
 * Return: 1 on Success.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
