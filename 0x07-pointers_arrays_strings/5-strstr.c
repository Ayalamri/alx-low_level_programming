#include"main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring.
 * @haystack: Pointer to the string to search in.
 * @needle: Pointer to the substring to locate.
 *
 * Return: Pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	if (haystack == NULL || needle == NULL)
		return (NULL);

	while (*haystack != '\0')
	{
		char *x = haystack;
		char *y = needle;

		while (*y != '\0' && *x == *y)
		{
			x++;
			y++;
		}

		if (*y == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}
