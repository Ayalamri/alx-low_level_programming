#include"lists.h"
#include <stddef.h>

/**
 * print_listint - Prints all the elements
 *		of a listint_t linked list.
 * @h: Pointer to the head node of the list.
 *
 * This function prints the elements of
 *		the linked list starting from the head node.
 * It uses a loop to traverse the linked list
 *		and prints each element separated by a space.
 * The function returns the number of nodes
 *		(i.e., the number of elements) in the list.
 *
 * Return: The number of nodes (i.e., the number
 *		of elements) in the linked list.
 */

size_t print_listint(const listint_t *h)
{
	size_t co = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		co++;

		if (h != NULL)
			printf(" ");
	}

	printf("\n");
	return (co);
}
