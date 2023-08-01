#include"lists.h"

/**
 * find_listint_loop - find
 * @head: list
 * Return: adrs
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *x, *y;

	if (head == NULL)
		return (NULL);
	for (y = head->next; y != NULL; y = y->next)
	{
		if (y == y->next)
			return (y);
		for (x = head; x != y; x = x->next)
			if (x == y->next)
				return (y->next);
	}
	return (NULL);
}
