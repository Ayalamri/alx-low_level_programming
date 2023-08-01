#include"lists.h"
#include <stddef.h>

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head node of the list.
 * @index: Index of the node to retrieve (starting from 0).
 *
 * This function traverses the linked list starting from the head node and
 * returns the node at the given index. The first node is at index 0,
 * the second node is at index 1, and so on. If the node at the given index
 * does not exist, it returns NULL.
 *
 * Return: Pointer to the nth node, or NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cc = 0;

	listint_t *cu = head;

	while (cu != NULL)
	{
		if (cc == index)
			return (cu);

		cu = cu->next;
		cc++;
	}

	return (NULL);
}
