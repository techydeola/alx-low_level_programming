#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - a function that prints all argument it recieves
 * @argc: argument count
 * @argv: arguments passed in
 *
 * Return: nothing
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc >= 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
		return (0);
	}
	else
		return (1);
}
