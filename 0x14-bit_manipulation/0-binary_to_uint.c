#include"main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary string to an unsigned int.
 * @b: Pointer to the binary string (0 and 1 chars).
 *
 * Return: The converted number, or 0 if there are
 * invalid characters or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int y = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		y = (y << 1) | (*b - '0');
		b++;
	}

	return (y);
}
