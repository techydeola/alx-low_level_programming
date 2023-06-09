#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that prints it name
 * @argc: argument count
 * @argv: arguments passed in
 *
 * Return: (0) success
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
		return (0);
	}
	else
		return (1);
}
