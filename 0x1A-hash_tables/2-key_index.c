#include "hash_tables.h"

/**
*key_index - For return the index using "key" and "size"
*@key: Generate string index
*@size: Size of tables' items
*Return: The key to store
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int id;

	id = hash_djb2(key);

	return (id % size);
}
