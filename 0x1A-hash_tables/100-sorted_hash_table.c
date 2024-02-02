i#include "hash_tables.h"

/**
 * shash_table_create - creates a shash table
 * @size: size of the array
 *
 * Return: a pointer to the newly created hash table
 * NULL if something went wrong
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *iTable;

	iTable = malloc(sizeof(shash_table_t));
	if (!iTable)
		return (NULL);

	iTable->size = size;
	iTable->array = calloc(size, sizeof(shash_node_t *));
	if (!(iTable->array))
	{
		free(iTable);
		return (NULL);
	}

	iTable->shead = NULL;
	iTable->stail = NULL;

	return (iTable);
}

/**
 * add_sorted_ht_key - Adds node in sorted linked ht list
 * @ht: Hast table
 * @shnode: node to add based on key (ASCII value)
 *
 * Return: a pointer to the newly created hash table
 * NULL if something went wrong
 */
void add_sorted_ht_key(shash_table_t *ht, shash_node_t *shnode)
{
	shash_node_t *iTemp = ht->shead, *iTemp2;

	if (!ht->shead || strcmp(shnode->key, ht->shead->key) <= 0)
	{
		shnode->snext = ht->shead;
		if (ht->shead)
			ht->shead->sprev = shnode;
		if (!(ht->stail))
			ht->stail = shnode;
		ht->shead = shnode;
		return;
	}

	iTemp2 = iTemp->snext;
	while (iTemp && iTemp2 && strcmp(shnode->key, iTemp2->key) > 0)
		iTemp = iTemp->snext, iTemp2 = iTemp->snext;

	iTemp->snext = shnode;
	shnode->snext = iTemp2;
	shnode->sprev = iTemp;
	if (iTemp2)
		iTemp2->sprev = shnode;
	else
		ht->stail = shnode;

}
/**
 * shash_table_set - Adds an element to the shash table
 * @ht: Hash table
 * @key: Key for hash table
 * @value: value for key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *shNode = NULL, *iNode = NULL;
	unsigned long int index;
	char *iValue = NULL, *iKey = NULL;

	if (!ht || !(ht->array) || !key || !key[0] || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	shNode = ht->array[index];
	iValue = strdup(value);
	if (!iValue)
		return (0);
	while (shNode != NULL)
	{
		if (!strcmp(shNode->key, key))
		{
			free(shNode->value);
			shNode->value = iValue;
			return (1);
		}
		shNode = shNode->next;
	}

	shNode = ht->array[index];
	iNode = malloc(sizeof(shash_node_t));
	if (iNode == NULL)
		return (free(iValue), 0);
	iKey = strdup(key);
	if (!iKey)
		return (free(iValue), free(iNode), 0);

	iNode->key = iKey;
	iNode->value = iValue;
	iNode->next = shNode;
	iNode->sprev = NULL, iNode->snext = NULL;
	ht->array[index] = iNode;
	add_sorted_ht_key(ht, iNode);

	return (1);
}
/**
 * shash_table_get - Retrieves an element from the shash table
 * @ht: Hash table
 * @key: Key for hash table
 *
 * Return: Pointer to element or NULL if failed
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *shNode = NULL;
	unsigned long int index;

	if (!ht || !(ht->array) || !key || !key[0])
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	shNode = ht->array[index];

	while (shNode != NULL)
	{
		if (!strcmp(shNode->key, key))
			return (shNode->value);

		shNode = shNode->next;
	}

	return (NULL);
}
/**
 * shash_table_print - prints the hash table using the sorted linked list
 * @ht: hash table
 *
 * Return: No Return
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *hkey;
	int comma = 0;

	if (!ht || !(ht->array) || !(ht->shead))
		return;

	hkey = ht->shead;
	printf("{");
	while (hkey)
	{
		if (comma)
			printf(", ");
		printf("'%s': '%s'", hkey->key, hkey->value);
		comma = 1;
		hkey = hkey->snext;
	}
	printf("}\n");

}
/**
 * shash_table_print_rev - prints the hash table using the sorted linked list
 * but in reverse
 * @ht: hash table
 *
 * Return: No Return
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *hkey;
	int comma = 0;

	if (!ht || !(ht->array) || !(ht->stail))
		return;

	hkey = ht->stail;
	printf("{");
	while (hkey)
	{
		if (comma)
			printf(", ");
		printf("'%s': '%s'", hkey->key, hkey->value);
		comma = 1;
		hkey = hkey->sprev;
	}
	printf("}\n");

}
/**
 * shash_table_delete - frees a shash table
 * @ht: hash table
 *
 * Return: No Return
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *shNode, *iTemp;
	unsigned long int i;

	if (!ht || !(ht->array))
		return;

	for (i = 0; i < ht->size; i++)
	{
		shNode = ht->array[i];
		while (shNode)
		{
			iTemp = shNode->next;
			free(shNode->key);
			free(shNode->value);
			free(shNode);
			shNode = iTemp;
		}
	}
	free(ht->array);
	free(ht);
}

