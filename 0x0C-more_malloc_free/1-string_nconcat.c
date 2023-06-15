#include "main.h"
#include <stdlib.h>
#include <string.h>


/**
 * string_nconcat - function concatenate two string
 * @s1: first string
 * @s2: second string
 * @n: bytes to concatenate
 * Return: new string, NULL on falure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	new_str = malloc(sizeof(char) * (strlen(s1) + n + 1));

	if (new_str)
	{
		j = 0;

		for (i = 0; s1[i] != '\0'; i++)
		{
			new_str[i] = s1[i];
			j++;
		}
		for (i = 0; i < n; i++)
		{
			new_str[j] = s2[i];
			j++;
		}
		new_str[j] = '\0';
	}
	else
		return (NULL);

	return (new_str);
}
