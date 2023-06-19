#include "dog.h"
#include "main.h"

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: an instance of the struct dog
 * @name: pointer to the string to initialize the first element
 * @age: pointer to the value to initialize the second element
 * @owner: pointer to the string to initialize the third element
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d)->name = name;
	(*d)->age = age;
	(*d)->owner = owner;
}
