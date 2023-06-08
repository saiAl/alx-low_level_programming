#include "main.h"

int check(char c);

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
		if (s[i] >= 'a' && s[i] <= 'z' && !check(s[i - 1]))
		{
			if (!check(s[i - 1]) && s[i - 1] != '-')
			{
				s[i] -= cap;
			}
		}
	}

	return (s);
}

/**
 * check - check if the param given is letter or number
 * @c: param
 * Return: 1 if it's a letter, 0 otherwise
 */
int check(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);

}
