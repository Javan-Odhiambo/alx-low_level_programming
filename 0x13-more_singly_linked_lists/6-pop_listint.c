#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * and returns the head node’s data (n).
 * @head: head of the linked list.
 *
 * Return: head node's data (n) or (0) if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp = NULL;
	int n;

	tmp = *head;
	if (tmp == NULL)
		return (0);

	*head = tmp->next;
	n = tmp->n;
	free(tmp);

	return (n);

}
