#include <stdio.h>
#include <stdlib.h>

int change(int n);

/**
 * main - Entry point
 * @argc: param
 * @argv: param
 * Return: The number of cents
 */

int main(int argc, char *argv[])
{

	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0 && atoi(argv[1]) != 0)
	{
		printf("0\n");
	}
	else
	{
		cents = change(atoi(argv[1]));
		printf("%d\n", cents);
	}

	return (cents);
}

/**
 * change - function that change coins
 * @n: param
 * Return: The number of changes to make
 */

int change(int n)
{
	int i, res, count = 0;
	int coins[5] = {25, 10, 5, 2, 1};

	i = 0;

	while (i < 5)
	{
		res = n / coins[i];
		count += res;
		n -= (res * coins[i]);
		i++;
	}

	return (count);
}


