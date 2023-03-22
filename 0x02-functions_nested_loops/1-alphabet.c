#include "main.h"

/**
 * print_alphabet - function that print alphabet
 *
 * Return: string of character.
 */

void print_alphabet(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

}
