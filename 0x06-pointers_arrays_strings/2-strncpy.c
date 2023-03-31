#include "main.h"
#include <string.h>

/**
 * _strncpy - functioncopy string
 * @dest: param
 * @src: param
 * @n: param
 * Return: copied string (dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
