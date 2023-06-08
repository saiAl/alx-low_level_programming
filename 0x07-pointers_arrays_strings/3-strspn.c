#include "main.h"

/**
 * _strspn - function get lenght prefix substring
 * @s: param-> string
 * @accept: param-> substring
 * Return: length, 0 if not
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int value, i, j;
	char tmp;

	i = 0;
	value = 0;
	while (s[i] != '\0')
	{
		tmp = s[i];
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (tmp == accept[j])
			{
				++value;
				break;
			}
		}
		i++;
	}
	return (value);
}
