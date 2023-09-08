#include "hash_tables.h"

/**
 * hash_table_print - function that print hash tables
 * @ht: hash table
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0, count = 0;

	for (i = 0; i < ht->size; i++)
		if (ht->array[i] != NULL)
			count++;

	printf("{");
	for (i = 0; i < ht->size; i++)
		if (ht->array[i] != NULL)
		{
			if (count > 0)
			{
				printf("\'%s\': \'%s\', ", ht->array[i]->key, ht->array[i]->value);
				count--;
			}
			if (count == 0)
				printf("\'%s\': \'%s\'", ht->array[i]->key, ht->array[i]->value);
		}
	printf("}\n");
}
