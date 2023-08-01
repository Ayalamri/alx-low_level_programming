#include"lists.h"
/**
 * free_listint2 - Frees a list of integers and sets the head to NULL.
 *
 * @head: A pointer to a pointer to the head of the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *a;

	listint_t *n;

	if (head == NULL)
		return;

	a = *head;
	while (a != NULL)
	{
		n = a->n;
		free(a);
		a = n;
	}

	*head = NULL;
}
