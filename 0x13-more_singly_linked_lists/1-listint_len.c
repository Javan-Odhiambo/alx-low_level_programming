#include "lists.h"

/**
 * listint_len -  counts the number of elements in the linked list
 * @h: list to be printed.
 *
 * Return: number of elements in the single linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
