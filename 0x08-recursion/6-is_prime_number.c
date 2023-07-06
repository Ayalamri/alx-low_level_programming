#include"main.h"

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_recursive(n, 2));
}

/**
 * is_prime_recursive - Recursive helper
 *                     function to check primality
 * @n: The number to check
 * @div: The current divisor being checked
 *
 * Return: 1 if the number is prime, 0 otherwise
 */

int is_prime_recursive(int n, int div)
{
	if (div * div > n)
		return (1);

	if (n % div == 0)
		return (0);

	return (is_prime_recursive(n, div + 1));
}
