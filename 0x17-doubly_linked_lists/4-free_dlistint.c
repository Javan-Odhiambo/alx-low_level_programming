#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list.
 * @head:head of the linked list.
 * Return: void
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	return;

}
