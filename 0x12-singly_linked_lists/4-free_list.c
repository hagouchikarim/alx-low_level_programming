#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a linked list.
 * @header: Pointer to the list to be freed.
 */
void free_list(list_t *header)
{
	list_t *iTemp;

	while (header)
	{
		iTemp = header->next;
		free(header->str);
		free(header);
		header = iTemp;
	}
}

