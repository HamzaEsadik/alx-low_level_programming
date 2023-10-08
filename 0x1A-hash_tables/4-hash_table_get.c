#include "hash_tables.h"
/**
 * hash_table_get - function to retrieve value associeted with key
 * @ht: pointer to hash table
 * @key: key to retrive value
 *
 * Return: value or NULL if key does not exit.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t  *bkt;

	if (!ht || !key || !*key)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	bkt = ht->array[idx];

	while (bkt)
	{
		if (!strcmp(key, bkt->key))
			return (bkt->value);
		bkt = bkt->next;
	}
	return (NULL);
}
