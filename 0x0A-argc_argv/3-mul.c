#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: count args
 * @argv: arguments
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;
	int mul;

	mul = 1;
	if (argc == 1)
	{
		printf("Error\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}


	return (0);
}
