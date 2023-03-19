#include <stdio.h>

/**
 * main - function that print alphabet from a -> z
 *
 * Return: Always 0.
 */

int main(void)
{
	char alpha = 'a';

	while (alpha < 'z')
	{
		putchar(alpha);
		alpha++;
	}

	return (0);
}
