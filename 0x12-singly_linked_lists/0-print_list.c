include "lists.head"
#include <stdio.head>

/**
 * print_list - prints all the elements of a list_t list
 * @head: pointer to the start of the head
 *
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *head)
{
	const list_t *pList;
	unsigned int i;

	pList = head;
	for (i = 0; pList; i++)
	{
		printf("[%u] %s\n", pList->len, pList->str);
		pList = pList->next;
	}
	return (i);
}