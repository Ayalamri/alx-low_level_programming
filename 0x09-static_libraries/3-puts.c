#include "main.h"
#include <unistd.h>

/**
 * _puts - function that prints a string, followed by a new line
 *
 * @str: string parameter to print
 *
 * Return: Nothing
*/

void _puts(char *str)
{
	int i = 0;

	if (str != NULL)
	{
		while (str[i] != '\0')
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
