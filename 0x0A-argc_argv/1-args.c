#include <stdlib.h>
#include <stdio.h>

/**
 * main - a function that prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: argument passed in
 *
 * Return: Always 0 (Success)
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	argc -= 1;
	printf("%d\n", argc);

	return (0);
}
