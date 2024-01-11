#include "lists.h"

/**
 * dlistint_len - Returns the number
 * of elements in a double linked list.
 * @h: Head of the list.
 * Return: Number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int iCount;

	iCount = 0;

	if (h == NULL)
		return (iCount);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		iCount++;
		h = h->next;
	}

	return (iCount);
}

