#include "lists.h"

/**
 * add_node_end - Add a new node at the list's end.
 * @header: Ptr to the first node.
 * @str: Ptr to the string for the new node.
 * Return: Address.
 */
list_t *add_node_end(list_t **header, const char *str)
{
	unsigned int iLength = 0;
	list_t *iTemp, *iTemp1;

	if (str == NULL)
		return (NULL);

	iTemp = malloc(sizeof(list_t));
	if (iTemp == NULL)
		return (NULL);

	iTemp->str = strdup(str);
	if (iTemp->str == NULL)
	{
		free(iTemp);
		return (NULL);
	}
	while (str[iLength])
		iLength++;
	iTemp->len = iLength;
	iTemp->next = NULL;

	if (*header == NULL)
	{
		*header = iTemp;
		return (iTemp);
	}

	iTemp1 = *header;
	while (iTemp1->next)
		iTemp1 = iTemp1->next;
	iTemp1->next = iTemp;
	return (iTemp);
}

