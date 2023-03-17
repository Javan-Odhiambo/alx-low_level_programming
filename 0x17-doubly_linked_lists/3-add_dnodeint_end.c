#include "lists.h"

/**
 * add_dnodeint_end - Adds a node to the end of the linked list.
 * @head:head of the linked list.
 * @n: data of the new node;
 * Return: Pointer to the newly added node or NULL on failure
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *trav;
	dlistint_t *pNode;

	if (head == NULL)
		return (NULL);

	trav = *head;

	pNode = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (pNode == NULL)
		return (NULL);
	pNode->n = n;

	if (!trav)
	{
		pNode->next = NULL;
		pNode->prev = NULL;
		*head = pNode;
		return (pNode);
	}

	while(trav->next)
		trav = trav->next;

	pNode->next = trav->next;
	trav->next = pNode;
	pNode->prev = trav;

	return pNode;
}
