#include <stdio.h>

/**
 * main - Entry point
 * @argc: param
 * @argv: param
 * Return: Always 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	i = 0;
	while (i < argc - 1)
		i++;

	printf("%d\n", i);
	return (0);
}
