#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - a function that concatenates all the arguments of a program
 * @ac: argument count
 * @av: pointer to all the arguments
 *
 * Return: NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int k = 0;
	int i, j;
	int tot_len;

	if (ac == 0 || av == NULL || *av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		tot_len += strlen(av[i]);
	}

	tot_len += ac - 1 + 1;
	ptr = (char *)malloc(tot_len * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			ptr[k++] = av[i][j];
		ptr[k++] = '\n';
	}
	ptr[k] = '\0';

	return (ptr);
}
