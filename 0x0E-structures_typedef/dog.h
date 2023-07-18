#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure or class named dog
 *
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: The owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef dog dog_t;

#endif
