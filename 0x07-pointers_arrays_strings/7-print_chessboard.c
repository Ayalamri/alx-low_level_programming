#include"main.h"
#include <stddef.h>

/**
 * print_chessboard - Prints the chessboard.
 * @a: Pointer to the 2D array representing the chessboard.
 */
void print_chessboard(char (*a)[8])
{
	int x, y;

	if (a == NULL)
		return;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
