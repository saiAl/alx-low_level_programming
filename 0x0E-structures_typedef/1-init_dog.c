#include "dog.h"

/**
 * init_dog - function initialize struct
 * @d: struct name
 * @name: variable inside struct
 * @age: variable inside struct
 * @owner: variable inside struct
 * Description: data type
 * Return: there is no return value
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (!d)
	{
		d = malloc(sizeof(struct));

		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
