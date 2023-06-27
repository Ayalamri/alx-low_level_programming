#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by src
 * @dest: char type string
 * @src: char type string
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, const char *src)
{
	char *dest_ptr = dest;

	while (*src != '\0')
	{
		*dest_ptr = *src;
		src++;
		dest_ptr++;
	}

	*dest_ptr = '\0';

	return (dest);
}
