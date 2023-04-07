#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table of a given size
 * @size: size of the array
 * Return: Pointer to the hash table on success or NULL on failure
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;

	h_table = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (h_table == NULL)
		return (NULL);

	h_table->array = (hash_node_t **) malloc(sizeof(hash_node_t *) * size);
	if (h_table->array == NULL)
	{
		return (NULL);
	}
	h_table->size = size;

	return (h_table);
}
