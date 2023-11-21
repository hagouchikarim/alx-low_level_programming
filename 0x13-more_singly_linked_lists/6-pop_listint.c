#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Removes the first element of a singly linked list.
 * @head: A pointer
 * Return: The int value if success
 */
int pop_listint(listint_t **head)
{
	int iData;
	listint_t *iTemp;

	if (*head == NULL)
		return (0);

	iTemp = *head;
	*head = iTemp->next;
	iData = iTemp->n;
	free(iTemp);
	return (iData);
}

