#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: param for counting arguments
 * @argv: param for argument values
 * Return: value.
 */

int main(int argc, char *argv[])
{
	int i;
	int cent;
	int count;
	int coin;
	int arr[] = {25, 10, 5, 2, 1};

	coin = 0;

	if (argc == 2)
	{
		cent = atoi(argv[1]);

		if (cent >= 0)
		{
			for (i = 0; cent > 0; i++)
			{
				coin = cent / arr[i];
				cent = cent % arr[i];
				count += coin;
			}
			printf("%d\n", count);
		}
		else
		{
			printf("0\n");
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
