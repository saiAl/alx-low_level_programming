#include "main.h"
/**
 * string_toupper - function converts string
 * @s: param
 * Return: uppercase string.
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] = s[i] - 32;
	}
}
