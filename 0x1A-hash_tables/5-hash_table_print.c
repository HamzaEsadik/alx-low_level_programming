#include "hash_tables.h"
/**
 * hash_table_print - function to print the key:value
 * @ht: pointer to hashtable
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t  *bkt;
	int ntfn = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		bkt = ht->array[i];
		while (bkt)
		{
			if (ntfn)
				printf(", ");
			printf("'%s': '%s'", bkt->key, bkt->value);
			ntfn = 1;
			bkt = bkt->next;
		}
	}
	printf("}\n");
}
