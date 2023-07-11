#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - function that returns a pointer
 *		 to a 2 dimensional array of integers
 * @width: int
 * @height: int
 * Return: 2d array
 */
int **alloc_grid(int width, int height)
{
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **)malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);

	for (int i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (int j = 0; j < i; j++)
				free(ptr[j]);
			free(ptr);
			return (NULL);
		}

		for (int j = 0; j < width; j++)
			ptr[i][j] = 0;
	}

	return (ptr);
}


