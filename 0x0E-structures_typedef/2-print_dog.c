#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 *
 * @d: Structure dog
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
		printf("Name: %s\nAge: %f\nOwner: %s", d.name, d.age, d.owner);
}
