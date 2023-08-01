#include"lists.h"
#include <stddef.h>

/**
 * delete_nodeint_at_index - Deletes the node
 *		at a given index in a listint_t linked list.
 * @head: Pointer to a pointer to the head node of the list.
 * @index: Index of the node to be deleted (starting from 0).
 *
 * This function deletes the node at the
 *		specified index in the linked list.
 * The first node is at index 0, the second
 *		node is at index 1, and so on.
 * If the index is out of bounds (i.e., the node
 *		does not exist at the given index),
 * the function returns -1 to indicate failure.
 *
 * Return: 1 if the deletion succeeded, or -1
 *		if it failed (index out of bounds).
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ps;

	listint_t *x;

	unsigned int c;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		listint_t *tt = *head;
		*head = (*head)->next;
		free(tt);
		return (1);
	}

	x = *head;

	ps = NULL;

	c = 0;

	while (x != NULL && c < index)
	{
		ps = x;
		x = x->next;
		c++;
	}

	if (x == NULL)
		return (-1);

	ps->next = x->next;
	free(x);

	return (1);
}
