#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: Pointer to struct dog
 * @name: Name as char *
 * @age: Age as float
 * @owner: Owner as char *
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d.name = name;
		d.age = age;
		d.woner = owner;
	}
}
