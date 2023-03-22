#include "main.h"

/**
 * _isalpha - function checks the character if it's alphabet.
 * @c: parameters for the character.
 * Return: 1 on success.
 */
int _isalpha(int c)
{

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
