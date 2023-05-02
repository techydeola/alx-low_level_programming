#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function that initialize a variable type struct dog
 * @d: variable to be initialized
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
