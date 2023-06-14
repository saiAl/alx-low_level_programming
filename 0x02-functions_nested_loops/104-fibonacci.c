#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0.
 */

int main(void)
{
	int i;
	unsigned long int n1, n2, next;

	n1 = 1;
	n2 = 2;

	next = n1 + n2;

	printf("%lu, %lu, %lu, ", n1, n2, next);

	for (i = 0; i <= 81; i++)
	{
		n1 = n2;
		n2 = next;
		next = n1 + n2;
		if (i < 81)
			printf("%lu, ", next);
		else
			printf("%lu \n", next);
	}

	return (0);
}
