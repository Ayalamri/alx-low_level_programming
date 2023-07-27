#include <unistd.h>
#include "lists.h"

/**
 * _putchar - writes the character c
 * @c: the character to print
 *
 * Return: Always 0
 */
int _putchar(char c)
{
        write(1, &c, 1);

        return (0);
}
