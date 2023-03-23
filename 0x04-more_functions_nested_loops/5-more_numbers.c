#include "main.h"

/**
 * more_numbers - function print digit.
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int n;
	int i;

	n = 0;
	while (n < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n')
		n++;
	}
}
