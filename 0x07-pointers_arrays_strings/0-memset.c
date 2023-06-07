#include "main.h"

/**
 * _memset - function that fills memory with byte
 * @s: param
 * @b: param
 * @n: param
 * Return: memory area poinnted by s
 */

char *_memset(char *s, char b. unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
