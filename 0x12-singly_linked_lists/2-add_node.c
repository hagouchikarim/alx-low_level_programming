#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Add new node at the start of a list.
 * @header: Double pointer to list_t.
 * @str: New string to add.
 * Return: adress on success.
 */
list_t *add_node(list_t **header, const char *str)
{
	unsigned int iLen = 0;
	list_t *iNew;

	while (str[iLen])
		iLen++;

	iNew = malloc(sizeof(list_t));
	if (!iNew)
		return (NULL);

	iNew->str = strdup(str);
	iNew->len = iLen;
	iNew->next = (*header);
	(*header) = iNew;

	return (*header);
}

