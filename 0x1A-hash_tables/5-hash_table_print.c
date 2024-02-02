#include "hash_tables.h"

/**
*hash_table_print - Print value of ht
*@ht: Hash table
*
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *iTemp;
	int iNum = 0;

	if (ht == NULL)
		return;
	i = 0;
	printf("{");
	while (i < ht->size)
	{
		while (ht->array[i])
		{
			iTemp = ht->array[i];
			while (iTemp)
			{
				if (iNum)
					printf(", ");
				printf("'%s': '%s'", iTemp->key, iTemp->value);
				iTemp = iTemp->next;
				iNum = 1;
			}
			break;
		}
		i++;
	}
	printf("}\n");


}
