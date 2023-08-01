#include"lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: The value to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nm = malloc(sizeof(listint_t));

	if (nm == NULL)
		return (NULL);

	nm->n = n;
	nm->next = *head;
	*head = nm;

	return (nm);
}
