#include "hash_tables.h"

/**
 * hash_table_create - creates a new Hash Table
 * @size: sizeof the table
 * Return: the pointer address to the newly created table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newTable;
	hash_node_t **new_array;
	unsigned long int i;

	newTable = malloc(sizeof(hash_table_t));
	if (!newTable)
		return (NULL);
	new_array = malloc(sizeof(hash_node_t) * size);
	if (!new_array)
		return (NULL);

	for (i = 0; i < size; i++)
		new_array[i] = NULL;

	newTable->size = size;
	newTable->array = new_array;

	return (newTable);
}
