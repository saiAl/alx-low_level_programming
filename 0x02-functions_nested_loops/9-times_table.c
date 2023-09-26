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
	int last, second;

	while (n <= 9)
	{
		for (m = 0; m <= 9; m++)
		{
			res = m * n;
			last = res % 10;
			second = res / 10;

			if (m == 0)
			{
				_putchar(res + '0');
				_putchar(',');
				continue;
			}
			_putchar(' ');
			if (second > 0)
				_putchar(second + '0');
			else
				_putchar(' ');

			_putchar(last + '0');

			if (m != 9)
				_putchar(',');
		}
		_putchar('\n');
		n++;
	}
}
