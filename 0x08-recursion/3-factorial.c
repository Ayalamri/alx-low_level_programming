#include"main.h"

/**
 * factorial - Returns the factorial of a number
 * @n: The number to calculate the factorial of
 *
 * Return: Factorial of n, or -1 if n is negative (error)
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}

