#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: param
 * @argv: param
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	long int n1, n2;

	if (argc == 1)
		printf("Error\n");
	else
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);

		printf("%ld\n", n1 * n2);
	}
	return (0);
}
