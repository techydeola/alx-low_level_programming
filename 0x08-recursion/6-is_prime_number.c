#include "main.h"

/**
 * is_prime_number_recursive - a function that checks if n is divisible
 * @n: first argument
 * @divisor: the divisor
 *
 * Return: 0 if a divisor is found and 1 otherwise
 */

int is_prime_number_recursive(int n, int divisor)
{
	if (n <= 1)
		return (0);

	if (divisor == 1)
		return (1);

	if (n % divisor == 0)
		return (0);

	return (is_prime_number_recursive(n, divisor - 1));
}

/**
 * is_prime_number - a function checks if anumber is prime number
 * @n: the number to be checked
 *
 * Return: 1 if True and 0 otherwise
 */

int is_prime_number(int n)
{
	return (is_prime_number_recursive(n, n - 1));
}
