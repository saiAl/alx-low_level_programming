#include "main.h"

/**
 * rev_string - reverse a string.
 * @s: param
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int length;
	
	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (; length - 1 >= 0; length--)
	{
		_pitchar(s[length - 1]);
	}

}
