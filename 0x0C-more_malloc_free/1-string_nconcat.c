#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @n: number of bytes of n2
 *
 * Return: NULL (failure)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int length_1, length_2, total;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length_1 = strlen(s1);
	length_2 = strlen(s2);

	if (n >= length_2)
		n = length_2;

	total = length_1 + n + 1;
	ptr = malloc(total);

	if (ptr != NULL)
	{
		strncpy(ptr, s1, total);
		strncpy(ptr + length_1, s2, n);
		ptr[length_1 + n] = '\0';
	}
	else
		return (NULL);

	return (ptr);
}
