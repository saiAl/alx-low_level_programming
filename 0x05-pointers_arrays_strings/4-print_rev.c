#include "main.h"
/**
 * print_rev - function reverse a string
 * @s: param
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i;
	int length;

	length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	for (; length - 1 >= 0; length--)
	{
		_putchar(s[length - 1]);
	}
	_putchar('\n');
}
