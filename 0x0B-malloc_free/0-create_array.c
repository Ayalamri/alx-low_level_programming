#include"main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * @size: size of the array
 * @c: char to initialize
 * Return: pointer to the array initialized or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size == 0)
		return (NULL);

	char *ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
