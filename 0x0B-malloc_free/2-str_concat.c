#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function concatenat two strings
 * @s1: param.
 * @s2: param.
 * Return: NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	int i;
	int j;
	char *s;

	len1 = strlen(s1);
	len2 = strlen(s2);
	s = malloc(sizeof(char) * (len1 + len2));

	if (s != NULL)
	{
		for (i = 0; i < len1; i++)
		{
			s[i] = s1[i];
		}

		for (j = 0; j < len2; j++)
		{
			s[len1 + j] = s2[j];
		}

		return (s);
	}
	else
	{
		return (NULL);
	}
}
