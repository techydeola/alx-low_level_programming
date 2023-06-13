#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars, and initializes
 *                it with a specific char
 * @size: size of memory type to be allocated
 * @c: character to be stored in the memory
 *
 * Return: NULL if size = 0 or failure
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
