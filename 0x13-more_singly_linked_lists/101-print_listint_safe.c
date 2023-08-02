#include"lists.h"
#include <stddef.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head node of the list.
 * Return: The number of nodes in the linked list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t coo = 0;
	const listint_t *cuu = head;
	const listint_t *l = NULL;

	while (cuu != NULL)
	{
		printf("[%p] %d\n", (void *)cuu, cuu->n);
		coo++;

		if (cuu->next >= l)
		{
			if (l == NULL)
				l = cuu;
			else
				break;
		}

		cuu = cuu->next;
	}

	if (cuu != NULL && cuu->next >= l)
	{
		fprintf(stderr, "-> [%p] %d\n", (void *)cuu, cuu->n);
		exit(98);
	}

	return (coo);
}
