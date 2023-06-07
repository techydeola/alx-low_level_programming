#include "main.h"

/**
 * find_sqrt_recursive - a helper function
 * @number: first parameter
 * @left: second parameter
 * @right: third parameter
 *
 * Return: -1
 */

int find_sqrt_recursive(int number, int left, int right)
{
	int mid = 0;
	int square = 0;

	if (left > right)
		return (-1);

	mid = left + (right - left) / 2;
	square = mid * mid;

	if (square == number)
		return (mid);
	else if (square < number)
		return (find_sqrt_recursive(number, mid + 1, right));
	else
		return (find_sqrt_recursive(number, left, mid - 1));
}

/**
 * _sqrt_recursion - a function that returns the natural square root
 *                   of a number
 * @n: the value to be calculated
 *
 * Return: -1 if n has no natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt_recursive(n, 0, n));
}
