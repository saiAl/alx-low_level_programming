#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0.
 */

int main(void)
{
	int i;

	long double n1, n2, next;

	n1 = 1;
	n2 = 2;

	next = n1 + n2;
	printf("%.0lf, %.0lf, %.0lf, ", n1, n2, next);

	for (i = 4; i <= 98; i++)
	{
		n1 = n2;
		n2 = next;
		next = n1 + n2;
		if (i < 98)
			printf("%.0lf, ", next);
		else
			printf("%.0lf \n", next);
	}

	return (0);
}
