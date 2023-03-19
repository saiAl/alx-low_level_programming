#include <stdio.h>

/**
 * main - function that print numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar('0' + i);
	}
	putchar('\n');

	return (0);
}
