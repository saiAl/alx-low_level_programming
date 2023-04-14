#include <stdio.h>

/**
 * main - Entry point.
 * Return: Always 0.
 */

int main()
{
	int i;
	int mul;
	int num;

	mul = 0;
	num = 1024;

	while(num > 0)
	{
		num--;
		if ((num % 3 == 0) || (num % 5 == 0))
		{
			mul += num;
		}
	}
	printf("%d\n", mul);
	return (0);
}
