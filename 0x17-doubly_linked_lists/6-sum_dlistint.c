#include "lists.h"

/**
 * sum_dlistint - Returns the s of all the data (n)
 * @head: Pointer to the head of the doubly linked list.
 *
 * Return: Sum of all the data, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}

	return (s);
}
