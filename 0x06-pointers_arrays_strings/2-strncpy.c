#include "main.h"

/**
 * _strncpy - is a funtion that copies a string
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of bytes to be copied
 *
 * Return: Always dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
