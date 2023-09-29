#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int x = 1UL << 63;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	while (x > 0)
	{
		if (n & x)
			putchar('1');
		else
			putchar('0');
		x >>= 1;
	}
}
