#include "main.h"

/**
 *
 *
 *
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
			if (i <= 9)
			{
				_putchar(i + '0');
			}
			else
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
		}
		_putchar('\n')
		n++;
	}
}
