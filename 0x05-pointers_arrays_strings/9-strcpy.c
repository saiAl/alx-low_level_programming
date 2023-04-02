#include "main.h"

/**
 * _strcpy - function that copies a string.
 * @src: param for the string being copied
 * @dest: param holds the copied string
 * Return:string in dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int length;

	length = strlen(src);

	for (i = 0; i <= length; i++)
	{
		dest[i] = src[i];
	}
}
