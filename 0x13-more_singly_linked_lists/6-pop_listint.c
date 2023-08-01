#include"lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to a pointer to the head node of the list.
 *
 * This function deletes the head node of the list and returns its data (n).
 * If the linked list is empty, it returns 0.
 *
 * Return: The data (n) of the deleted head node, or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *a;
	int b;

	if (!head || !*head)
		return (0);

	a = (*head)->next;
	b = (*head)->n;
	free(*head);
	*head = a;
	return (b);
}
