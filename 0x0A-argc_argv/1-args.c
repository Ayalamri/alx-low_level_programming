#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int x;
	
	x = argc - 1;
	printf("%d\n", x);

	return (0);
}

