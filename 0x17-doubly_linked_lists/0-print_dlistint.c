#include "lists.h"

/**
 * print_dlistint - Prints all the
 * elements of a dlistint_t list.
 * @h: Head of the list.
 * Return: Number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int iCount;

	iCount = 0;

	if (h == NULL)
		return (iCount);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		iCount++;
		h = h->next;
	}

	return (iCount);
}

