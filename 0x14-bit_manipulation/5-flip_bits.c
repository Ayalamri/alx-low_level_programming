#include"main.h"
#include <stdio.h>

/**
 * flip_bits - Returns the number of bits to flip to get from n to m.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int R = n ^ m;
	unsigned int c = 0;

	while (R > 0)
	{
		c += R & 1;
		R >>= 1;
	}

	return (c);
}
