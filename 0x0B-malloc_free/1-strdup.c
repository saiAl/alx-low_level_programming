#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function that duplcate string
 * @str: parameter
 * Return: NULL or pointer
 */

char *_strdup(char *str)
{
	char *s;
	int i;
	int len;

	len = strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}

	s  = malloc(sizeof(char) * len);

	if (s != NULL)
	{
		for (i = 0; i < len; i++)
		{
			s[i] = str[i];
		}

		return (s);
	}
	else
	{
		return (NULL);
	}
}
