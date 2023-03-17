#include "lists.h"

/**
 * print_dlistint - Prints a doubly linked list.
 * @h:head of the linked list.
 * Return: size of the doubly linked list
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}

	return (n);
}
