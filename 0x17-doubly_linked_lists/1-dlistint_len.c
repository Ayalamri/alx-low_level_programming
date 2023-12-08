#include "lists.h"

/**
 * dlistint_len - counts the number of elements in a linked dlistint_t list.
 * @h: Pointer to the head of the doubly linked list.
 *
 * Return: The number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
    size_t hj = 0;

    while (h != NULL)
    {
        hj++;
        h = h->next;
    }

    return (hj);
}
