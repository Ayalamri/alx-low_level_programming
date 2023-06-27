#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 *         starting with the first character, followed by a new line
 *
 * @str: string parameter input
 *
 * Return: Nothing
*/

void puts2(char *str)
{
	int i = 0;

	if (str == NULL)
		return;

	for (int i = 0; str[i] != '\0'; i += 2)
	{
		putchar(str[i]);
	}

	_putchar('\n');
}
