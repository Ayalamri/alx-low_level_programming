#include"main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 (Success) or 1 (Error)
 */

int main(int argc, char *argv[])
{
	int i, s = 0;

	if (argc == 1)
	{
		_putchar("0");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		int j;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				_putchar("Error");
				return (1);
			}
		}

		s += atoi(argv[i]);
	}

	_putchar(s);

	return (0);
}
