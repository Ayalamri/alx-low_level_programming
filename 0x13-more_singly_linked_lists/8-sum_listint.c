#include"lists.h"
#include <stddef.h>

/**
 * sum_listint - Returns the sum of all
 *		the data (n) in a listint_t linked list.
 * @head: Pointer to the head node of the list.
 *
 * This function traverses the linked list starting from the head node and
 * calculates the sum of all the data (n) in the nodes. If the list is empty,
 * it returns 0.
 *
 * Return: The sum of all the data (n) in
 *		the linked list, or 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	int x = 0;

	listint_t *cc = head;

	while (cc != NULL)
	{
		x += cc->n;
		cc = cc->next;
	}

	return (x);
}
