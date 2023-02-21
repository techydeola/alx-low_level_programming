#include <stdio.h>

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char cd;

	for (cd = 'a'; cd <= 'z'; cd++)
		putchar(cd);

	putchar('\n');
}

int main(void)
{
	/* calls the function*/

	print_alphabet();

	return (0);
}
