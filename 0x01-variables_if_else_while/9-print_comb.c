#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	for (int i = 0; i < 11; i++)
	{
		putchar(',');
		putchar(' ');
		putchar(i + '0');
	}

	putchar('\n');

	return (0);
}
