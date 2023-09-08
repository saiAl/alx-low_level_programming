#include "hash_tables.h"

/**
 * hash_table_set - function adds node to hash tables
 * @ht: hash table
 * @key: key
 * @value: value associated with key
 * Return: 1 on success, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *new;

	if (key == NULL || key == '\0')
		return (0);

	new = (hash_node_t *)malloc(sizeof(hash_node_t *));
	if (!new)
		return (0);

	new->key = (char *)key;
	new->value = (char *)value;
	new->next = NULL;

	index = key_index((unsigned char *)key, ht->size);

	if (!ht->array[index])
		ht->array[index] = new;
	else
	{
		new->next = ht->array[index];
		ht->array[index] = new;
	}

	return (1);
}
