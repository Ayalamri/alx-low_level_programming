#include"lists.h"
#include <stddef.h>

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to a pointer to the head node of the list.
 * Return: A pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *pr = NULL;

	listint_t *cur = *head;

	listint_t *next;

	while (cur != NULL)
	{
		next = cur->next;
		cur->next = pr;
		pr = cur;
		cur = next;
	}

	*head = pr;
	return (*head);
}
