#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure
 * @name: structure variable
 * @age: structure varibale
 * @owner: structure variable
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;
#endif
