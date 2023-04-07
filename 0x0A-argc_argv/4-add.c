#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: count
 * @argv: array of args
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;
	int sum;

	sum = 0;
	i = 1;
	if (argc == 1)
	{
		printf("0\n");
	}
	else if (*argv[i] >= '0' && *argv[i] <= '9')
	{
		for (; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
