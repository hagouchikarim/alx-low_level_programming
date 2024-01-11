#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the
 * node at the specified index of a dlistint_t list.
 * @head: Head of the list.
 * @index: Index of the node to be deleted.
 * Return: 1 if successful, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *iHeader1;
	dlistint_t *iHeader2;
	unsigned int i;

	iHeader1 = *head;

	if (iHeader1 != NULL)
		while (iHeader1->prev != NULL)
			iHeader1 = iHeader1->prev;

	i = 0;

	while (iHeader1 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = iHeader1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				iHeader2->next = iHeader1->next;

				if (iHeader1->next != NULL)
					iHeader1->next->prev = iHeader2;
			}

			free(iHeader1);
			return (1);
		}
		iHeader2 = iHeader1;
		iHeader1 = iHeader1->next;
		i++;
	}

	return (-1);
}

