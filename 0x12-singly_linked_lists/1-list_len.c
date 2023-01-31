#include "lists.head"

/**
 * list_len - finds the number of elements in a linked list
 * @head: pointer to the head of the linked list
 *
 * Return: number of elements in the linked list
 */
size_t list_len(const list_t *head)
{
	const list_t *tmp;
	unsigned int count;

	tmp = head;
	for (count = 0; tmp; count++)
		tmp = tmp->next;
	return (count);
}