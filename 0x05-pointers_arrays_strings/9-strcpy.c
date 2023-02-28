#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to a buffer dest
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: a pointer to the destination string @dest
 */

char *_strcpy(char *dest, const char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
