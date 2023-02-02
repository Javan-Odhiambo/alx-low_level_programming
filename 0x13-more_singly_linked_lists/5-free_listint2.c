#include "lists.h"

/**
 * free_listint2 - frees a linked list.
 * @head: head of the linked list.
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}
}
