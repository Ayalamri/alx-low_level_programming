#include"lists.h"
#include <stddef.h>

/**
 * list_len - Returns the number of elements in a list_t list.
 * @h: Pointer to the beginning of the list.
 *
 * Return: The number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}

	return (c);
}
