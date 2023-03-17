#include "lists.h"

/**
 * sum_dlistint - Adds up all the data (n) in the linked list.
 * @head: head of the linked list.
 * Return: Sum of the data or 0 if empty.
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
