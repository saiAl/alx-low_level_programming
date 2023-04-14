#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	unsigned int num1;
	unsigned int num2;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
		exit (98);
	}

	if (isdigit(num1) == 1 || isdigit(num2) == 1)
	{
		printf("Error\n");
		exit (98);
	}
	else
	{
		printf("%d\n", num1 * num2);
	}

	return (0);
}
