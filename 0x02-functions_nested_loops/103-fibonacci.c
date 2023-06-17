#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned int n1, n2, next, sum;


	n1 = 1;
	n2 = 2;
	next = n1 + n2;

	sum = n2;
	while (next <= 4000000)
	{
		n1 = n2;
		n2 = next;
		next = n1 + n2;
		if (next % 2 == 0)
			sum += next;
	}

	printf("%u\n", sum);

	return (0);
}
