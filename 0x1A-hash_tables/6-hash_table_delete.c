#include "hash_tables.h"

/**
*hash_table_delete - Free Alloed hash tables.
*@ht: Hash table to be free.
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *list, *iTemp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		list = ht->array[i];
		while (list)
		{
			iTemp = list;
			list = list->next;
			if (iTemp->key)
				free(iTemp->key);
			if (iTemp->value)
				free(iTemp->value);
			if (iTemp)
				free(iTemp);
		}
	}
	free(ht->array);
	free(ht);
}
