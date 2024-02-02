#include "hash_tables.h"

/**
 * hash_table_set - Set in hash table.
 * @ht: - hash table
 * @key: To Make hashing
 * @value: Crosponding to key
 * Return: 0 or 1
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *iNew;
	char *iValue;
	unsigned long int id, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	iValue = strdup(value);
	if (iValue == NULL)
		return (0);

	id = key_index((const unsigned char *)key, ht->size);
	for (i = id; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = iValue;
			return (1);
		}
	}

	iNew = malloc(sizeof(hash_node_t));
	if (iNew == NULL)
	{
		free(iValue);
		return (0);
	}
	iNew->key = strdup(key);
	if (iNew->key == NULL)
	{
		free(iNew);
		return (0);
	}
	iNew->value = iValue;
	iNew->next = ht->array[id];
	ht->array[id] = iNew;

	return (1);
}

