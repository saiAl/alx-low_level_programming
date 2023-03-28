#include "main.h"

/**
 * rev_string - reverse a string.
 * @s: param
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int length;
	char temp;
	char *start;
	char *end;

	start = s;

	while (s[length] != '\0')
	{
		length++;
	}

	end = s + length - 1;

	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = *start;
		start++;
		end--;
	}
	_putchar('\n');


}
