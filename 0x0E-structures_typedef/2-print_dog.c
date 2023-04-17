#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that print struct
 * @d: param holds the struct
 * description: print element from dog struct
 * Return: void
 */

void print_dog(struct dog *d)
{
	int i;

	if (d != NULL)
	{
		for (i = 0; i < 1; i++)
		{
			if (d->name != NULL)
			{
				printf("Name: %s\n", d->name);
			}
			else
			{
				printf("Name: (nill)\n");
			}

			if (d->age)
			{
				printf("Age: %.6f\n", d->age);
			}
			else
			{
				printf("Age: (nill)\n");
			}

			if (d->owner != NULL)
			{
				printf("Owner: %s\n", d->owner);
			}
			else
			{
				printf("Owner: (nill)\n");
			}

		}
	}

}
