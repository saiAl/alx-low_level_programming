#include <stdio.h>

/**
 * main - function print hexadecimal
 *
 * Return: Always 0.
 */

int main(void)
{

	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');

	return (0);
}
