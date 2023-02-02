#include "lists.h"
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *pNode = NULL;
    listint_t *newNode = NULL;

	pNode = *head;

    while (pNode->next != NULL)
        pNode = pNode->next;

    newNode = (listint_t *) malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = pNode->next;


	return (newNode);
}
