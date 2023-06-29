#include "main.h"

/**
 * _strncat - Concatenates two strings up to n bytes.
 * @dest: The destination string.
 * @src: The source string to be appended.
 * @n: The maximum number of bytes from src to be appended.
 *
 * Return: Pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int destl = 0;
	int i;

	while (dest[destl] != '\0')
		destl++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[destl + i] = src[i];

	dest[destl + i] = '\0';

	return (dest);
}
