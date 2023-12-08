#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list.
 * @head: Pointer to the head of the doubly linked list.
 * @index: Index of the node to be deleted (starting from 0).
 *
 * Return: 1 if succeeded, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current, *temp;
    unsigned int u;

    if (*head == NULL)
        return (-1);

    current = *head;

    if (index == 0)
    {
        *head = (*head)->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(current);
        return (1);
    }

    for (u = 0; u < index && current != NULL; u++)
    {
        current = current->next;
    }

    if (current == NULL)
        return (-1);

    temp = current->prev;
    temp->next = current->next;

    if (current->next != NULL)
        current->next->prev = temp;

    free(current);

    return (1);
}
