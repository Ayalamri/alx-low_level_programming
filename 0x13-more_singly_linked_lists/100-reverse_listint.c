#include"lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to a pointer to the head node of the list.
 *
 * This function reverses the given linked list in-place by reversing the order
 * of the nodes. It does not use malloc, free, or arrays, and uses a maximum of
 * two variables for the operation. It returns a pointer to the first node of
 * the reversed list.
 *
 * Return: A pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *x = NULL;

	listint_t *c = *head;

	listint_t *next;

	while (c != NULL)
	{
		next = c->next;
		c->next = x;
		x = c;
		c = next;
	};

	*head = x;
	return (*head);
}
