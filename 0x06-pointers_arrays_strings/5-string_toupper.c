#include "main.h"

/**
 * string_toupper - a funtion that changes lowercase to uppercase
 * @str: a pointer to an array of string
 *
 * Return: str
 */

char *string_toupper(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}
	}

	return (str);
}
