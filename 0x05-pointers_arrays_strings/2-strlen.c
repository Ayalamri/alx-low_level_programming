#include "main.h"

/**
 * _strlen - function that returns the length of a string
 *
 * @s: string parameter input
 *
 * Return: length of string
*/

int _strlen(char *s)
{
	int length = 0;

	if (s != NULL)
	{
		while (*s != '\0')
		{
			length++;
			s++;
		}
	}

	return (length);
}
