#include "lists.h"

/**
 * add_nodeint_end -  Adds a node to the end of the linked list.
 * @head: head of the linked list.
 * @n: data to be placed in the new list.
 *
 * Return: pointer to newly created node or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *pNode = NULL;
	listint_t *newNode = NULL;

	newNode = (listint_t *) malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);

	}

	pNode = *head;
	while (pNode->next != NULL)
		pNode = pNode->next;

	pNode->next = newNode;

	return (newNode);
}
