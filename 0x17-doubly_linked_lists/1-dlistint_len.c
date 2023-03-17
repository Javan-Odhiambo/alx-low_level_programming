#include "lists.h"

/**
 * dlistint_len - Finds the number of elements in a doubly linked list.
 * @h: head of the doubly linked list.
 * Return: size of the linked list.
*/

size_t dlistint_len(const dlistint_t *h)
{
    size_t n = 0;

    if (h == NULL)
        return (n);

    while (h)
    {
        n++;
        h = h->next;
    }

    return (n);
}