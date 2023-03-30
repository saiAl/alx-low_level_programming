#include "main.h"
/**
 * _strcmp - function that compare two strings.
 * @s1: param
 * @s2: param
 * Return: 0 if equal
 */

int *_strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		*s1++;
		*s2++;
	}
	
	if (*s1 == *s2)
	{
		return (0);
	}
	else if (*s1 > *s2)
	{
		return (*s2 - *s1);
	}
	else
	{
		return (*s1 - *s2);
	}
}
