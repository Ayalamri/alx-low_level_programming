#include "main.h"

/**
 * print_rev -  function that prints a string,
 *              in reverse, followed by a new line
 *
 * @s: pointer to the string to print
 *
 * Return: Nothing
*/

void print_rev(char *s)
{
	int l = 0;

	if (s != NULL)
	{
		while (s[l] != '\0')
		{
			l++;
		}

		for (int i = l - 1; i >= 0; i--)
		{
			_putchar(s[i]);
		}
	}

	_putchar('\n');
}
