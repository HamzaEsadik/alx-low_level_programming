#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table
 *
 * Return: pointer to hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tbl;

	if (size == 0)
		return (NULL);

	tbl = calloc(1, sizeof(hash_table_t));
	if (tbl == NULL)
		return (NULL);

	tbl->size = size;
	tbl->array = calloc(size, sizeof(hash_node_t *));
	if (tbl->array == NULL)
	{
		free(tbl);
		return (NULL);
	}
	return (tbl);
}
