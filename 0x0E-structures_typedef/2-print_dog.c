#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that print a struct dog
 * @d: struct name of type dog
 * Return: void function
 */

void print_dog(struct dog *d)
{
	char *name;
	float age;
	char *owner;

	if (d == NULL)
		printf("(nil)");

	name = d->name;

	if (!name)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", name);

	age = d->age;
	if (!age)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", age);

	owner = d->owner;
	if (!owner)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", owner);
}
