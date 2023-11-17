#include "lists.h"

/**
 * list_len - Calculate the number of elements.
 * @header: Pointer to a list.
 * Return: Int
 */

size_t list_len(const list_t *header)
{
	const list_t *iTemp;
	unsigned int iCounter = 0;

	iTemp = header;
	while (iTemp)
	{
		iCounter++;
		iTemp = iTemp->next;
	}
	return (iCounter);
}

