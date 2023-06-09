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
	long int n1, n2, res;

	if (argc != 3)
		printf("Error\n");
	else
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		res = n1 * n2;
		printf("%ld\n", res);
	}
	return (0);
}
