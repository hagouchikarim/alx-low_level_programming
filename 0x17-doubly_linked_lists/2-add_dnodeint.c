#include "lists.h"

/**
 * add_dnodeint - Adds a new node with
 * the given value at the beginning of a list.
 * @head: Pointer to the head of the doubly linked list.
 * @n: Value to be assigned to the new node.
 * Return: Address of the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *iNew;
	dlistint_t *iHeader;

	iNew = malloc(sizeof(dlistint_t));
	if (iNew == NULL)
		return (NULL);

	iNew->n = n;
	iNew->prev = NULL;
	iHeader = *head;

	if (iHeader != NULL)
	{
		while (iHeader->prev != NULL)
			iHeader = iHeader->prev;
	}

	iNew->next = iHeader;

	if (iHeader != NULL)
		iHeader->prev = iNew;

	*head = iNew;

	return (iNew);
}

