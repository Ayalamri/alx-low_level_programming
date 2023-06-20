#include <stdio.h>

/**
 * print_alphabet_10_times - Prints the alphabet in lowercase 10 times
 *
*/

void print_alphabet_10_times(void)
{
	int j, i;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}
}
