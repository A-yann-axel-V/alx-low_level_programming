#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: Pointer to truct dog
 * @name: Name as char *
 * @age: Age as float
 * @owner: Owner as char *
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d.name = name;
		d.age = age;
		d.owner = owner;
	}
}
