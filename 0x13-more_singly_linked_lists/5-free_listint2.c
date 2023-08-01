#include"lists.h"
/**
 * free_listint2 - Frees a list of integers and sets the head to NULL.
 *
 * @head: A pointer to a pointer to the head of the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *nm, *pp;

	if (!head)
		return;
	nm = *head;
	while (nm)
	{
		pp = nm;
		nm = nm->next;
		free(pp);
	}
	*head = NULL;
}
