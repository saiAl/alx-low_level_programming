#include "main.h"
#include "string.h"

/**
 * puts_half - function that print second half of string.
 * @str: param
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int length;
	int half;

	length = strlen(str);

	if ((length % 2) != 0)
	{
		half = (length - 1) / 2;
		while (half < length - 1)
		{
			half++;
			_putchar(str[half]);
		}
	}
	else
	{
		half = length / 2;
		half -= 1;
		while (half < length - 1)
		{
			half++;
			_putchar(str[half]);
		}
	}
	_putchar('\n');
}
