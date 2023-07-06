#include"main.h"

/**
 * _sqrt_recursion - Returns the natural
 *                    square root of a number
 * @n: The number to calculate the square root of
 *
 * Return: Natural square root of n, or -1 if
 * it does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt_help(n, 0, n));
}

/**
 * sqrt_help - Recursive helper function
 * to calculate square root
 * @n: The number to calculate the square root of
 * @s: The starting value for the search
 * @e: The ending value for the search
 *
 * Return: Natural square root of n, or
 * -1 if n does not have a natural square root
 */

int sqrt_help(int n, int s, int e)
{
	if (s > e)
		return (-1);

	int m = s + (e - s) / 2;

	if (m * m == n)
		return (m);
	else if (m * m > n)
		return (sqrt_help(n, s, m - 1));
	else
		return (sqrt_help(n, m + 1, e));
}
