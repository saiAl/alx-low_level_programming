#include "main.h"

/**
 * _atoi - function convert strings to integer.
 * @s: param
 * Return: integer numbers
 */

int *_atoi(char *s)
{
	int i;
	int n;

	n = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		n = n * 10 + (s[i] - 48);
	}
}
