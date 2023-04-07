#include <stdio.h>

/**
 * main - Entry point
 * @argc: count of arguments
 * @argv: string of arguments
 * Return: Always 0.
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", i);
	}
	return (0);
}
