#include <stdio.h>

/**
 * main - Entry point
 * Return - Always 1 success
 */

int main()
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++) {
		putchar(ch);
	}

	for (ch = 'A'; ch <= 'Z'; ch++) {
		putchar(ch);
	}

	putchar('\n');

	return 0;
}
		
