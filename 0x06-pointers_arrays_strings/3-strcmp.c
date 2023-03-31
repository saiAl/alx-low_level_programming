#include "main.h"
/**
 * _strcmp - function that compare two strings.
 * @s1: param
 * @s2: param
 * Return: 0 if equal
 */

int *_strcmp(char *s1, char *s2)
{
	int i;
	int value;
	int *ptr;

	ptr = &value;
	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
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
		i++;
	}
	return (ptr);
}
