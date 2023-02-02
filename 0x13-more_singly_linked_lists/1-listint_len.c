#include "lists.h"

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