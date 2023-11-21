#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - specified position in a linked list.
 * @head: Pointer
 * @index: Position
 * Return: 1 on success, -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *iCurr, *next;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}

	iCurr = *head;

	for (i = 0; i < index - 1; i++)
	{
		if (iCurr->next == NULL)
			return (-1);
		iCurr = iCurr->next;
	}

	next = iCurr->next;
	iCurr->next = next->next;
	free(next);

	return (1);
}

