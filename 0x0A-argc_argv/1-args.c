#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - a function that prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument passed in
 *
 * Return: (0) succes
 */

int main(int argc, __attribute__ ((unused)) char *argv[])
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
