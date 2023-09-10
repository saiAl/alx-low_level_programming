#include "hash_tables.h"
#include <string.h>

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

	if (key == NULL || key[0] == '\0')
		return (0);
	if (!ht)
		return (0);

	new = (hash_node_t *)malloc(sizeof(hash_node_t *));
	if (!new)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	index = key_index((unsigned char *)key, ht->size);

	if (!ht->array[index])
		ht->array[index] = new;
	else
	{
		if (strcmp(ht->array[index]->key, new->key) == 0)
			ht->array[index]->value = strdup(new->value);
		else
		{
			new->next = ht->array[index];
			ht->array[index] = new;
		}
	}

	return (1);
}
