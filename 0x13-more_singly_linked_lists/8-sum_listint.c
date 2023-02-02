#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: head of the linked list.
 * Return: sum of data (n) or (0) when empty
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp = NULL;
	int sum = 0;

	if (head == NULL)
		return (sum);

	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}

