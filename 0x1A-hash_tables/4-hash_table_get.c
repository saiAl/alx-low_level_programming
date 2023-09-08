#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table
 * @key: key to retrieve its value
 * Return: return value pair with key, otherwise return NULL on failure
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;
	hash_node_t *new;

	index = key_index((unsigned char *)key, ht->size);

	new = (hash_node_t *)malloc(sizeof(hash_node_t *));
	if (!new)
		return (NULL);

	new = ht->array[index];
	if (ht->array[index] == NULL || new->value == NULL)
		return (NULL);

	return (new->value);
}
