#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

/**
 * main - a function that adds positive numbers
 * @argc: argument count
 * @argv: argument passed in
 *
 * Return: (1) Error, (0) success
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	char *endptr;

	if (argc < 2)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		errno = 0;
		strtol(argv[i], &endptr, 10);
		if (errno != 0 || *endptr != '\0')
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
