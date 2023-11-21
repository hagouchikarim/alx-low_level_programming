#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a
 * specified position in a linked list.
 * @head: Pointer
 * @idx: Position
 * @n: Data
 * Return: Pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *iNode, *iTemp;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
		return (NULL);

	if (idx != 0)
	{
		iTemp = *head;

		for (; i < idx - 1 && iTemp != NULL; i++)
			iTemp = iTemp->next;

		if (iTemp == NULL)
			return (NULL);
	}

	iNode = malloc(sizeof(listint_t));

	if (iNode == NULL)
		return (NULL);

	iNode->n = n;

	if (index == 0)
	{
		iNode->next = *head;
		*head = iNode;
		return (iNode);
	}

	iNode->next = iTemp->next;
	iTemp->next = iNode;

	return (iNode);
}

