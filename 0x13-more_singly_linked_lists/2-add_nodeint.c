#include"lists.h"

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