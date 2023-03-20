#include <stdio.h>

/**
 * main - function print alphabet backowrds
 *
 * Return: Always 0.
 */

int main(void)
{
	int ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
