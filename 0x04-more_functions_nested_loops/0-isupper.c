#include"main.h"

/**
 * _isupper - function tells if a letter is upper
 *
 * @c: input for alphabet
 *
 * Return: return 1 if uppercase otherwise always 0
*/

int _islower(int c)
{
        if (c  >= 65 && c <= 90)
                return (1);
        return (0);
}
