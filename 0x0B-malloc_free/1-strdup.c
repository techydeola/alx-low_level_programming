#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 *           in memory, which contains a copy of string given as a parameter
 * @str: a pointer to the string
 *
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *ptr;
	int len;

	if (str == NULL)
		return (NULL);

	len = strlen(str) + 1;
	ptr = malloc(len * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	strcpy(ptr, str);
	return (ptr);
	free(ptr);
}
