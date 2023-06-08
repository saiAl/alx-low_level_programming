#include "main.h"

/**
 * _strcmp - function that compare two stringa.
 * @s1: param
 * @s2: param
 * Return: 0 if match, otherwise random number
 */

int _strcmp(char *s1, char *s2)
{
	int value, i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			value = s1[i] - s2[i];
			break;
		}
		else
		{
			value = 0;
		}
	}

	return (value);
}
