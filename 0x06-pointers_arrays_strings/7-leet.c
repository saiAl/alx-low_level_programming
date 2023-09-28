#include "main.h"

/**
 * leet - function that incode a string into 1337
 * @s: param
 * Return: string incoded
 */

char *leet(char *s)
{
	int i;
	char *new;
	char letters[] = {'a', 'e', 'o', 't', 'l'};
	int numbers[] = {7, 3, 0, 7, 1};

	new = s;
	while (*s)
	{
		for (i = 0; i < 5; i++)
			if (*s == letters[i] || *s == (letters[i] - 32))
				*s = numbers[i] + '0';
		s++;
	}
	return (new);
}
