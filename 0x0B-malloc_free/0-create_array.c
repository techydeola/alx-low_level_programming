#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of char.
 * @size: takes the size of the array
 * @c: characters passed in
 *
 * Return: if success - pointer
 *         if failure - NULL
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
