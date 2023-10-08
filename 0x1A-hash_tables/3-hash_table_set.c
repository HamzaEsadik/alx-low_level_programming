#include "hash_tables.h"

/**
 * hash_table_set - adds one element to the hashtable
 * @ht: pointer to hashtable
 * @key: key to add
 * @value: value to add
 *
 * Return: 1 if it succeeded, otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	char *valuecp, *keycp;
	hash_node_t  *bucket, *new_node;

	if (!ht || !key || !*key || !value)
		return (0);

	valuecp = strdup(value);
	if (!valuecp)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[idx];

	while (bucket)
	{
		if (!strcmp(key, bucket->key))
		{
			free(bucket->value);
			bucket->value = valuecp;
			return (1);
		}
		bucket = bucket->next;
	}
	new_node = calloc(1, sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(valuecp);
		return (0);
	}
	keycp = strdup(key);
	if (!keycp)
		return (0);
	new_node->key = keycp;
	new_node->value = valuecp;
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}
