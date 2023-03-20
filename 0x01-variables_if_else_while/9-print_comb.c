#include <stdio.h>

/**
 * main - function that print combinations of single-digit.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 9)
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('9');
		}
	}

	return (0);
}
