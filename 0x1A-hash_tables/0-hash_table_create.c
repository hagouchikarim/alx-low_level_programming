#include "hash_tables.h"

/**
*hash_table_create - Create new hash table
*@size: size of table's
*Return: address of table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *New;

	if (size == 0)
		return (NULL);

	New = calloc(1, sizeof(hash_table_t));
	if (New == NULL)
		return (NULL);
	New->size = size;
	New->array =  calloc(size, sizeof(hash_node_t *));
	if (New->array == NULL)
	{
		free(New);
		return (NULL);
	}
	return (New);
}

