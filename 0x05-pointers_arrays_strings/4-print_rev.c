#include "main.h"
/**
 * print_rev - function reverse a string
 * @s: param
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i;
	int j;
	int length;

	length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	for (j = i - 1; length >= 0; j--)
	{
		_putchar(*s);
	}
}
