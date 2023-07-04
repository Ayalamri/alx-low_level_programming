#include"main.h"
#include <stddef.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the 2D array representing the square matrix.
 * @size: Size of the matrix (number of rows/columns).
 */
void print_diagsums(int *a, int size)
{
	int row, col;
	int sum1 = 0;
	int sum2 = 0;

	if (a == NULL || size <= 0)
		return;

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			if (row == col)
				sum1 += a[row * size + col];

			if (row == size - col - 1)
				sum2 += a[row * size + col];
		}
	}

	_putchar(sum1);
	_putchar(sum2);
}
