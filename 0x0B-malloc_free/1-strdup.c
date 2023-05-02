#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *           which contains a copy of the string given as a parameter.
 * @str: string passed in
 *
 * Return: if str is NULL - NULL
 *         if success - pointer
 */

char *_strdup(char *str)
{
	char *duplicate;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	for (i = 0; str[i]; i++)
		duplicate[i] = str[i];

	duplicate[len] = '\0';

	return (duplicate);
}
