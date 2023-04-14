#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concat strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: bytes
 * Return: ptr.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned  int i;
	unsigned int j;
	unsigned int len1;
	unsigned int len2;
	unsigned int total;

	/*if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";*/

	len1 = strlen(s1);
	len2 = strlen(s2);
	total = len1 + len2;
	

	if (n >= len2)
		ptr = malloc(sizeof(char) * total + 1);
	else
		ptr = malloc(sizeof(char) * (len1 + n + 1));

	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];

	for (j = 0; j < n; j++)
		ptr[len1 + j] = s2[j];

	ptr[len1 + n] = '\0';

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
