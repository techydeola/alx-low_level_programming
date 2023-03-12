#include <stdlib.h>
#include <stdio.h>

/**
 * main - a function that multiplies two numbers.
 * @argc: argument count
 * @argv: argument passed in
 *
 * Return: if the program recieves two elements - 0.
 *	   if the program does not recieve two arguments - 1.
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
