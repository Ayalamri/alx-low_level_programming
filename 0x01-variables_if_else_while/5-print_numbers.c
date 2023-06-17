#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	int number = 0;

	for (number = 0; number < 10; number++)
		putchar(number);

	putchar('\n');

	return (0);
}
