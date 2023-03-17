#include "lists.h"

/**
 * get_dnodeint_at_index - Prints a doubly linked list.
 * @head:head of the linked list.
 * @index:index to get the node.
 * Return: pointer to node or NULL if node doesn't exit.
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *trav;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	trav = head;
	i = 0;

	while (trav != NULL && i < index)
	{
		trav = trav->next;
		i++;
	}

	if (i == index)
		return (trav);
	else
		return (NULL);

}
