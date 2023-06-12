#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - function concatenates two strings
 * @s1: param
 * @s2: param
 * Return: newly allocated memory contain s1 and s1, On failure NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i, total_len, j;
	char *ptr;

	total_len = strlen(s1) + strlen(s2) + 1;
	ptr = malloc(sizeof(char) * total_len);

	if (s1 == NULL)
		s1 = " ";

	if (s2 == NULL)
		s2 = " ";

	if (ptr)
	{
		j = 0;
		for (i = 0; s1[i] != '\0'; i++)
		{
			ptr[i] = s1[i];
			j++;
		}
		for (i = 0; s2[i] != '\0'; i++)
		{
			ptr[j] = s2[i];
			j++;
		}
		ptr[j] = '\0';
	}
	else
		return (NULL);

	return (ptr);
}
