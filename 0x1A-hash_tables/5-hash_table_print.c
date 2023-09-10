#include "hash_tables.h"
#include <stdio.h>

int size(const hash_table_t *ht);

/**
 * hash_table_print - function that print hash tables
 * @ht: hash table
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int count;
	hash_node_t *p;


	count = size(ht);
	printf("{");
	for (i = 0; ht && i < ht->size; i++)
	{
		p = ht->array[i];
		while (p)
		{
			count--;
			if (count > 0)
				printf("'%s': '%s', ", p->key, p->value);
			else if (count == 0)
				printf("'%s': '%s'", p->key, p->value);
			p = p->next;
		}
	}
	printf("}\n");
}

/**
 * size - get the number of nodes in hash tables
 * @ht: hash table
 * Return: number of nodes
 */

int size(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *n;
	int count = 0;

	for (i = 0; ht && i < ht->size; i++)
	{
		n = ht->array[i];
		while (n)
		{
			count++;
			n = n->next;
		}
	}
	return (count);
}
