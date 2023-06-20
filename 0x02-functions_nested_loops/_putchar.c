#include <unistd.h>
#include "main.h"

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int _putchar(char c)
{
    int l = length(c);

    write(1, c, length);

    return (0);
}
