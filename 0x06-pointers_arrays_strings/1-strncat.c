#include "main.h"
#include <string.h>

/**
 * _strncat - function concatenate string
 * @src: param
 * @dest: param
 * @n: number of char to be concatenated
 * Return: new value of dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_len;
	int src_len;

	dest_len = strlen(dest);
	src_len = strlen(src);
	i = 0;
	while (i <= src_len && i <= n)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	return (dest);
}
