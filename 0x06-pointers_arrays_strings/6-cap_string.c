#include "main.h"
/**
 * cap_string - function converts string
 * @s: param
 * Return: lowercase string.
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = s[i] + 32;
		}
	}

	return (s);
}

