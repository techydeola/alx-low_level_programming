#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to a buffer dest
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: a pointer to the destination string @dest
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (start);
}
