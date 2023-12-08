#include "lists.h"

/**
 * dlistint_len - returns the number
 * @h: pointer to the head of the doubly linked list
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
    size_t kl = 0;

    while (h != NULL)
    {
        h = h->next;
        kl++;
    }

    return kl;
}
