#include "main.h"
#include "string.h"

/**
 * _strcat - function concatenates strings
 * @dest: param 1st string
 * @src: param 2nd string
 * Return: new dest string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int destlen;
	int srclen;

	destlen = strlen(dest);
	srclen = strlen(src);

	i = 0;
	while (i <= srclen)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	return (dest);


}
