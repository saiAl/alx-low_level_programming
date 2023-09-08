#include "hash_tables.h"

/**
 * hash_table_create - function to create hash table
 * @size: size of the table
 * Return: ptr to newly created table on success, otherwise NULL on failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	if (size <= 0)
		return (NULL);

	table = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = (hash_node_t **) calloc(table->size, sizeof(hash_node_t *));

	return (table);
}
