#include "dog.h"


/**
 * init_dog - function that initiliaze a variables.
 * @d: a struct of name d
 * @name: structure variable
 * @age: structure variable
 * @owner: structure variable
 * Return: void function
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;

}
