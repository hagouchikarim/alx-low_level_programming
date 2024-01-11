#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at the specified position.
 * @h: Head of the list.
 * @idx: Index where the new node should be inserted.
 * @n: Value of the new node.
 * Return: Address of the new node, or NULL if failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *iNew;
	dlistint_t *iHead;
	unsigned int i;

	iNew = NULL;
	if (idx == 0)
		iNew = add_dnodeint(h, n);
	else
	{
		iHead = *h;
		i = 1;
		if (iHead != NULL)
			while (iHead->prev != NULL)
				iHead = iHead->prev;
		while (iHead != NULL)
		{
			if (i == idx)
			{
				if (iHead->next == NULL)
					iNew = add_dnodeint_end(h, n);
				else
				{
					iNew = malloc(sizeof(dlistint_t));
					if (iNew != NULL)
					{
						iNew->n = n;
						iNew->next = iHead->next;
						iNew->prev = iHead;
						iHead->next->prev = iNew;
						iHead->next = iNew;
					}
				}
				break;
			}
			iHead = iHead->next;
			i++;
		}
	}

	return (iNew);
}

