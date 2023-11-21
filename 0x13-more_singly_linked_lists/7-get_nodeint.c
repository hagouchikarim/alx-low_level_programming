#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Find a node in a list.
 * @head: Address
 * @index: Position
 * Return: Node address.
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int un = 0;

	if (head == NULL)
		return (NULL);

	for (un = 0; un < index; un++)
	{
		head = head->next;

		if (head == NULL)
			return (NULL);
	}

	return (head);
}

