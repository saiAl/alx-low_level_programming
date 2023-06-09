#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry pont
 * @argc: param
 * @argv: param
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, value = 0, sum = 0;

	i = 1;

	while (i < argc)
	{
		if (argc == 1)
		{
			sum = 0;
			break;
		}

		if (atoi(argv[i]))
		{
			sum += atoi(argv[i]);
			i++;
		}
		else
		{
			value = 1;
			break;
		}
	}

	if (value == 1)
	{
		printf("Error\n");
	}
	else
		printf("%d\n", sum);

	return (0);
}
