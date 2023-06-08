#include "main.h"

/**
 * cap_string - function that captilaize every word.
 * @s: param
 * Return: string captolaized
 */

char *cap_string(char *s)
{
	int i;

	for (i = 1; s[i]; i++)
	{
		if (s[i - 1] == ' ' || s[i - 1] == '.' || s[i - 1] == ';' || s[i - 1] == ',' || s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}')
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
	}
	return (s);
}
