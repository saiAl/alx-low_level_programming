#include "main.h"

/**
 * _atoi - function convert strings to integer.
 * @s: param
 * Return: integer numbers
 */

int *_atoi(char *s)
{
	int i;
	int j;
	int sign;
	unsigned int res;

	sign = 1;

	for (i = 0; s[i] != '\0'; i++)
	{

		if (s[i] == '-')
		{
			sign = -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			for (j = i; s[j] >= 48 && s[j] <= 57; j++)
			{
				res = res * 10 + (s[j] - 48);
			}
			break;
		}
		else
		{
			res = 0;
		}
	}

	return (res * sign);
}
