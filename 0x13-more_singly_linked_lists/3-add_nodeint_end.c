#include"lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: The value to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nm = malloc(sizeof(listint_t));

	listint_t *l = *head;

	if (nm == NULL)
		return (NULL);

	nm->n = n;
	nm->next = NULL;

	if (*head == NULL)
	{
		*head = nm;
		return (nm);
	}

	while (l->next != NULL)
		l = l->next;

	l->next = nm;
	return (nm);
}
