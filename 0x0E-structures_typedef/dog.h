#ifndef DOG_H
#define DOG_H

/**
 * struct dog - data type structre
 * @name: name of the dog
 * @owner: owner of the dog
 * @age: age of the dog
 * Description: this is a struct for dog
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
