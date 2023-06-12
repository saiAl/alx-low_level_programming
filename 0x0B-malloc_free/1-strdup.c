#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function that duplicate a string
 * @str: param
 * Return: pointer to newly allocated memory
 */

char *_strdup(char *str)
{
	int i, len;
	char *ptr;

	len = strlen(str) + 1;
	ptr = malloc(sizeof(char) * len);

	if (!str)
		return (NULL);

	if (ptr)
	{
		for (i = 0; str[i] != '\0'; i++)
			ptr[i] = str[i];

		ptr[i] = '\0';
	}
	else
		return (NULL);
	return (ptr);
}
