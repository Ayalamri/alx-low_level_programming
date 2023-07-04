#include"main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string.
 * @accept: Pointer to the string of bytes to search for.
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	if (s == NULL || accept == NULL)
		return (NULL);

	while (*s != '\0')
	{
		char *x = accept;

		while (*x != '\0')
		{
			if (*s == *x)
				return (s);
			x++;
		}
		s++;
	}

	return (NULL);
}
