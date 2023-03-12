#include <stdlib.h>
#include <stdio.h>

/**
 * main - a function that adds positive numbers.
 * @argc: argument count
 * @argv: argument passed in
 *
 * Return: if one of the number is not digit - 1.
 *	   if all number are digits - 0'
 */

int main(int argc, char *argv[])
{
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
