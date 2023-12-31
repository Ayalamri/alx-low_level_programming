#include"function_pointers.h"
/**
 * print_name - Prints a name
 * @name: Pointer to the name to be printed
 * @f: Function pointer to the print function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
