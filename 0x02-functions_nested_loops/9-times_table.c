#include "main.h"

/**
 * times_table - function that print 9 table
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int n;
	int m;
	int res;

	while (n <= 9)
	{
		for (m = 0; m <= 9; m++)
		{
			res = m * n;
			if (res > 9)
			{
				_putchar(res / 10 + '0');
				_putchar(res % 10 + '0');
			}
			else
			{
				_putchar(res + '0');
			}
			if (m < 9)
			{
				_putchar(',');
				if (res > 9)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
		n++;
	}
}
