#include <stdio.h>

/**
 * main - This function prints the name of the file it is compiled from
 *
 * Return: Always 1 (success)
 */

int main(void)
{
	printf("Name of this file is %s\n", __FILE__);

	return (1);
}
