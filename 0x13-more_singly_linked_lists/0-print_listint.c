#include "lists.h"

/**
 * print_listint - Prints elements of a singly linked list.
 * @h: Pointer to the head of the list.
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t iCount = 0;

	while (h)
	{
		printf("%d\n", h->n);
		iCount++;
		h = h->next;
	}

	return (iCount);
}

