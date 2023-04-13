#include "mian.h"
#include <string.h>
#include <stdlib.h>

/**
 *
 *
 */

char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int len;
	char *ptr;
	char *temp;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < ac)
	{
		total += strlen(av[i]) + 1;
		i++;
	}
	ptr = malloc(sizeof(char) * total + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	
	k = 0;
       for (i = 0; i < ac; i++)
       {
	       len = strlen(av[i]);
		for (j = 0; j < len; j++)
		{
			ptr[k++] = av[i][j];
		}
		ptr[k++] = '\n';
       }
       ptr[k] = '\0';

       return (ptr);
}

