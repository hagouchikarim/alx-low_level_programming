#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node
 * with the given value at the end of a list.
 * @head: Pointer to the head of the doubly linked list.
 * @n: Value to be assigned to the new node.
 * Return: Address of the new node, or NULL on failure.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *iHeader;
	dlistint_t *iNew;

	iNew = malloc(sizeof(dlistint_t));
	if (iNew == NULL)
		return (NULL);

	iNew->n = n;
	iNew->next = NULL;

	iHeader = *head;

	if (iHeader != NULL)
	{
		while (iHeader->next != NULL)
			iHeader = iHeader->next;
		iHeader->next = iNew;
	}
	else
	{
		*head = iNew;
	}

	iNew->prev = iHeader;

	return (iNew);
}

