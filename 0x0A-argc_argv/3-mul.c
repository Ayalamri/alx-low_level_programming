#include"main.h"
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 (Success) or 1 (Error)
 */

int main(int argc, char *argv[])
{
	int n1, n2, r;

	if (argc != 3)
	{
		_putchar("Error");
		_putchar('\n');
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	r = n1 * n2;

	_putchar(r);

	return (0);
}
