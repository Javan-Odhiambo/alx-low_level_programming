#include "hash_tables.h"
#include <string.h>


/**
 * create_node - creates a node for the hash table.
 *
 * @key: Key of the node.
 * @value: Value to be stored in the node.
 *
 * Return: Pointer to the created node on success or NULL on failure.
*/

hash_node_t * create_node(const char *key, const char *value)
{
	hash_node_t *node;
	
	node = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);

	return (node);
}

/**
 * hash_table_set - adds an element to the hash table.
 *
 * @ht: The hash table to insert to.
 * @key: The key of the item.
 * @value: The value of the item.
 *
 * Return: 1 on success and 0 on failure.
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	unsigned long int index;
	hash_node_t *node;

	if (strlen(key) == 0 || key == NULL || ht == NULL ||
		   	ht->array == NULL || ht->size == 0 || value == NULL)
		return (0);

	node = create_node(key, value);
	index = key_index((const unsigned char *) key, ht->size);

	if (ht->array[index] != NULL)
		node->next = ht->array[index];

	ht->array[index] = node;
	return (1);
}
