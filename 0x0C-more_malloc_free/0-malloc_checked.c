#include"main.h"
#include <stdlib.h>

/**
 * *malloc_checked - function that
 *		allocates memory using malloc
 * @b: int
 * Return: pointer to the array initialized or null
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
