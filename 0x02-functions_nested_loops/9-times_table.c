#include"main.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int i, j, R;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			R = i * j;

			if (R < 10 && j > 0)
				_putchar(' ');
			else if (R >= 10)
				_putchar((R / 10) + '0');

			_putchar((R % 10) + '0');

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
