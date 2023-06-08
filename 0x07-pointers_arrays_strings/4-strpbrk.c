#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strpbrk - function that search a string for any set of byte
 * @s: param
 * @accept: param
 * Return: string, if not NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, k;
	char *letter;

	letter = malloc(sizeof(char) * strlen(s));
	k = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == ' ')
			{
				letter[k] = ' ';
				k++;
				break;
			}
			if (s[i] == ',')
			{
				letter[k] = ',';
				k++;
				break;
			}
			if (accept[j] == s[i])
			{
				letter[k] = s[i];
				k++;
			}
			j++;
		}
		if (!letter)
		{
			return (NULL);
		}
	}
	return (letter);
}
