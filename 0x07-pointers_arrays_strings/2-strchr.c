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
	char *word;

	word = (char *)malloc(sizeof(char *) * strlen(s));
	if (!word)
		return (NULL);

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			break;

	j = 0;
	while (s[i] != '\0')
	{
		word[j] = s[i];
		i++;
		j++;
	}

	if (strlen(word) == 0)
		return ("nil");

	return (word);
}
