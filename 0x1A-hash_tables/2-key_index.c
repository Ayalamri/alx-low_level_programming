#include "hash_tables.h"

/**
 * key_index - gives you the j of a key
 * @key: the key
 * @size: the size of the array of the hash table
 *
 * Return: the j at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value, j;

	hash_value = hash_djb2(key);
	j = hash_value % size;

	return (j);
}
