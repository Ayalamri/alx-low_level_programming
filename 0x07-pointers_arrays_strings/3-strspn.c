#include"main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string.
 * @accept: Pointer to the string of acceptable characters.
 *
 * Return: Number of bytes in the initial segment of s consisting only of
 *         bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int l = 0;
	int x;

	while (*s)
	{
		x = 0;
		while (*accept)
		{
			if (*s == *accept)
			{
				x = 1;
				break;
			}
			accept++;
		}

		if (!x)
			break;

		l++;
		s++;
	}

	return (l);
}
