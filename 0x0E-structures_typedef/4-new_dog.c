#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - a function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: NULL if failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;
	int name_len, owner_len;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);

	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
		return (NULL);

	name_len = strlen(name) + 1;
	owner_len = strlen(owner) + 1;

	new_d->name = malloc(sizeof(char) * name_len);
	new_d->owner = malloc(sizeof(char) * owner_len);

	if (new_d->name == NULL || new_d->owner == NULL)
	{
		free(new_d->name);
		free(new_d->owner);
		free(new_d);
		return (NULL);
	}

	strcpy(new_d->name, name);
	strcpy(new_d->owner, owner);

	new_d->age = age;

	return (new_d);
}
