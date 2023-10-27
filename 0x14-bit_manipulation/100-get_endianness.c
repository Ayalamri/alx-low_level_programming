#include "main.h"

/**
 * get_endianness - Check the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int xy = 1;
	char *b = (char *)&xy;

	if (*b)
		return (1);
	else
		return (0);
}
