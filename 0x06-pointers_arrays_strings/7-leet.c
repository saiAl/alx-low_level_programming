#include "main.h"

/**
 * leet - function that incode a string into 1337
 * @s: param
 * Return: string incoded
 */

char *leet(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == 'a' || s[i] == 'A')
		{
			s[i] = '4';
		}
		else if (s[i] == 'e' || s[i] == 'E')
		{
			s[i] = '3';
		}
		else if (s[i] == 'o' || s[i] == 'O')
		{
			s[i] = '0';
		}
		else if (s[i] == 't' || s[i] == 'I')
		{
			s[i] = '7';
		}
		else if (s[i] == 'l' || s[i] == 'L')
		{
			s[i] = '1';
		}
		else
		{
			continue;
		}
	return (s);
}
