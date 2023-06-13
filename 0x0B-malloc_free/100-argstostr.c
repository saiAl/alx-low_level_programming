#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - function that concatenate all arguments.
 * @ac: param
 * @av: param
 * Return: pointer to a new string, on falure NULL
 */

char *argstostr(int ac, char **av)
{
	int i, j, k;
	int arg_len, size;
	char *ptr;

	size = ac * sizeof(av);
	ptr = malloc(sizeof(char) * size);

	if (ac == 0 || av == NULL)
		return (NULL);

	if (ptr)
	{
		i = 0;
		k = 0;

		while (i < ac)
		{
			arg_len = strlen(av[i]) - 1;
			for (j = 0; av[i][j] != '\0'; j++)
			{
				ptr[k] = av[i][j];
				if (j == arg_len)
				{
					k = k + 1;
					ptr[k] = '\n';
				}
				k++;
			}
			i++;
		}
	}
	else
		return (NULL);

	return (ptr);
}

