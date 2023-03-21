#include "main.h"

/**
 * main - Entry point
 * Return: Always 0.
 */


void print_alphabet(void);

int main(void)
{

	print_alphabet();
	return (0);
}

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
