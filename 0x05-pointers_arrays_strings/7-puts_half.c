#include "main.h"

/**
 * puts_half - function that prints half of a string,
 *             followed by a new line
 *
 * @str: char array string type
 *
 * Return: Nothing
*/

void puts_half(char *str)
{
	int len = 0;
	int beginning;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		beginning = len / 2;
	}
	else
	{
		beginning = (len - 1) / 2;
	}

	_putchar(str + beginning);
}
