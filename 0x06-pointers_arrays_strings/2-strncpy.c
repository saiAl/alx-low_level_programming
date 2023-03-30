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
	int src_len;

	src_len = strlen(src);
	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
