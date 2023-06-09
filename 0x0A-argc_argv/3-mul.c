#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - a function that multiplies two numbers
 * @argc: argument count
 * @argv: argument passed in
 *
 * Return: (0) success
 *         (1) Error
 */

int main(int argc, char *argv[])
{
	int total = 1;
	int i;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			total *= atoi(argv[i]);
		}
		printf("%d\n", total);
		return (0);
	}
}
