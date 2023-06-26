#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @s: string parameter input
 *
 * Return: Nothing
*/

void rev_string(char *s)
{
	int l = 0, i;
	char t;

	if (s == NULL)
		return;

	while (s[l] != '\0')
		l++;

	for (i = 0; i < l / 2; i++)
	{
		t = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = t;
	}
}
