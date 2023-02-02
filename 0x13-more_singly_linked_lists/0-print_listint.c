#include "lists.h"
#include <stdio.h>

/**
 * print_listint -  prints all the elements of a listint_t list.
 * @h: list to be printed.
 *
 * Return: number of elements in the single linked list
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}