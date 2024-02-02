#include "hash_tables.h"

/**
*hash_table_get - Retrive value to key in ht
*@ht: Hash table
*@key: Key used for hashing
*Return: Value 1 or otherwise nuil
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int id;
	hash_node_t *iTemp;

	if (ht == NULL || key == NULL || !(*key))
		return (NULL);
	id = key_index((const unsigned char *) key, ht->size);
	iTemp = ht->array[id];
	while (iTemp)
	{
		if (strcmp(iTemp->key, key) == 0)
			return (iTemp->value);
		iTemp = iTemp->next;
	}
	return (NULL);
}

