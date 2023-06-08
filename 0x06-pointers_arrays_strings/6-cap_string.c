#include "main.h"

int is_letter(char c);

/**
 * cap_string - function that captilaize every word.
 * @s: param
 * Return: string captolaized
 */

char *cap_string(char *s)
{
	int i;
	char cap = 'a' - 'A';

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z' && !is_letter(s[i - 1]))
		{
			if (!is_letter(s[i - 1]))
			{
				s[i] -= cap;
			}
		}
	}

	return (s);
}

/**
 * is_letter - check if the param given is letter
 * @c: param
 * Return: 1 if it's a letter, 0 otherwise
 */
int is_letter(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
