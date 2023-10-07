#include "hash_tables.h"

/**
 * key_index - get index for a key
 * @key: key to hash
 * @size: size of hashtable
 *
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
