#include"lists.h"

/**
 * add_nodeint -  Adds a node to the end of the linked list.
 * @head: head of the linked list.
 * @n: data to be placed in the new list.
 *
 * Return: pointer to newly created node or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *pNode = (listint_t *) malloc(sizeof(listint_t));

	if (pNode == NULL)
		return (NULL);

	pNode->n = n;
	pNode->next = NULL;
	*head = pNode;
	return (pNode);
}
