#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Sums the 'n' data values in a linked list.
 * @h: Pointer
 * Return: The integer sum
 */
int sum_listint(listint_t *h)
{
	int Stock = 0;

	while (h != NULL)
	{
		Stock += h->n;
		h = h->next;
	}
	return (Stock);
}

