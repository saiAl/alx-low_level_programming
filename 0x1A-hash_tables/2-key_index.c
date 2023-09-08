#include "hash_tables.h"

/**
 * key_index - function that return an index of given key
 * @key: the key which index are returned
 * @size: size of the hash table array
 * Return: index of given key on success, NULL on failure
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int k;

	k = hash_djb2(key);
	return (k % size);
}
