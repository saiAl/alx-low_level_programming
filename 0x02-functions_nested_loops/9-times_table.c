#include "main.h"
#include <stdio.h>

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
				putchar(res + '0');
				putchar(',');
				continue;
			}
			putchar(' ');
			if (second > 0)
				putchar(second + '0');
			else
				putchar(' ');

			putchar(last + '0');

			if (m != 9)
				putchar(',');
		}
		putchar('\n');
		n++;
	}
}
