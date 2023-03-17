#include "lists.h"

/**
 * add_dnodeint - Adds a node to the beginning of the linked list.
 * @head:head of the linked list.
 * @n: data to be stored inside the node
 * Return: pointer to the newly added node or NULL on failure.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *pNode = NULL;

    if (head == NULL)
        return (NULL);

    pNode = (dlistint_t *) malloc(sizeof(dlistint_t));
    if (pNode == NULL)
        return (NULL);

    pNode->n = n;
    pNode->next = *head;
    pNode->prev = NULL;
    *head = pNode;

    return (pNode);
}