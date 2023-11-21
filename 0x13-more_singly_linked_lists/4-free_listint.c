#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a singly linked list.
 * @h: A pointer to the first node of the list.
 * Return: Success (0)
 */
void free_listint(listint_t *h)
{
	listint_t *iTemp, *iTemp2;

	iTemp = h;

	while (iTemp != NULL)
	{
		iTemp2 = iTemp->next;
		free(iTemp);
		iTemp = iTemp2;
	}
}

