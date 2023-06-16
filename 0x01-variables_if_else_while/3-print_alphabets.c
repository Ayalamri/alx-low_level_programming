#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	char l;
	char u;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);

	for (u = 'A'; u <= 'Z'; u++)
		putchar(u);

	putchar('\n');

	return (0);
}
