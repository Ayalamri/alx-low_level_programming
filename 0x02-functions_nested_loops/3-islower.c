#include"main.h"

/**
 * _islower - function tells if a letter is lowercase or not
 *
 * @c: checks the input of function
 *
 * Return: return 1 if lowercase otherwise always 0
*/

int _islower(int c)
{
	if (c  >= 97 && c <= 122)
		return (1);
	return (0);
}
