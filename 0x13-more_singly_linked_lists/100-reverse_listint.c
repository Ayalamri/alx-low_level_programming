#include"lists.h"
#include <stddef.h>

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to a pointer to the head node of the list.
 * Return: A pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *m = NULL, *n = NULL;

	if (!head || !*head)
		return (NULL);
	m = *head;
	*head = NULL;
	while (m)
	{
	n = m->next;
		m->next = *head;
		*head = m;
		m = n;
	}
	return (*head);
}
