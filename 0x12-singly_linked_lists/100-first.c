#include "stdio.h"

/**
 * before_main - a function that prints a string before the main function
 *
 */

void  __attribute__((constructor)) before_main(void);

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
