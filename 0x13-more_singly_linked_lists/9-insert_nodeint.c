#include"lists.h"
#include <stddef.h>

/**
 * insert_nodeint_at_index - Inserts a new node
 *		at a given position in a listint_t linked list.
 * @head: Pointer to a pointer to the head node of the list.
 * @idx: Index where the new node should be added (starting from 0).
 * @n: Data (n) to be stored in the new node.
 *
 * This function inserts a new node with the
 *		given data (n) at the specified index
 * in the linked list. The first node is at
 *		index 0, the second node is at index 1, and so on.
 * If it is not possible to add the new node
 *		at index idx, the function returns NULL
 * and does not add the new node.
 *
 * Return: The address of the new node, or
 *		NULL if it failed to add the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *t;

	unsigned int co;

	co = 0;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	t = *head;
	while (t != NULL && co < idx - 1)
	{
		t = t->next;
		co++;
	}

	if (t == NULL || t->next == NULL)
	{
		free(new);
		return (NULL);
	}

	new->next = t->next;
	t->next = new;

	return (new);
}
