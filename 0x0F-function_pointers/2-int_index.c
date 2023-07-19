#include"function_pointers.h"

/**
 * int_index - function that searches for an
 *		integer in an array using a comparison function.
 * @array: Pointer to the array.
 * @size: Number of elements in the array.
 * @cmp: Function pointer to the comparison function.
 * Return: The index of the first matching element,
 *		or -1 if no element matches or if size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
			return (i);
			}
		}
	}
	return (-1);
}
