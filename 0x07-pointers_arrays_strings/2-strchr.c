#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strchr - function that locate a char
 * @s: param
 * @c: param
 * Return: pointer to the character
 */

char *_strchr(char *s, char c)
{
	int i, j;
	char *letter;

	letter = malloc(sizeof(char) * strlen(s));

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (c == s[i])
		{
			letter[j] = s[i];
			j++;
		}
		i++;
	}
	letter[j] = '\0';
	return (letter);
}
