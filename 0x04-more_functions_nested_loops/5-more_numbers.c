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
	int j;


	n = 0;
	while (n < 10)
	{
		for (i = 0; i <= 9; i++)
		{
			_putchar(i + '0');
		}
		for (j = 10; j <= 14; j++)
		{
			_putchar(j / 10 + '0');
			_puchar(j % 10 + '0');
		}
		_putchar('\n')
		n++;
	}
}
