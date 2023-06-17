#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{int i;
putchar(0);
for (i = 0; i < 10; i++)
{putchar(',');
putchar(' ');
putchar(i + '0');
}
	return (0);
}
