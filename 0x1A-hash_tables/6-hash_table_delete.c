#include "hash_tables.h"
/**
 * hash_table_delete - free the hashtable
 * @ht: pointer to hashtable
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *bkt, *frr;
	unsigned long int i = 0;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		bkt = ht->array[i];
		while (bkt)
		{
			frr = bkt;
			bkt = bkt->next;
			if (frr->key)
				free(frr->key);
			if (frr->value)
				free(frr->value);
			free(frr);
		}
	}
	free(ht->array);
	free(ht);
}
