#include "main.h"
#include <string.h>

/**
 * strncpy - functioncopy string
 * @dest: param
 * @src: param
 * Return: copied string (dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int src_len;

	src_len = strlen(src);

	while (i <= src_len && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i + 1] = '\0';

	return (dest);
}
