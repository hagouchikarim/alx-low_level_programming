#include "lists.h"

/**
 * free_dlistint - Frees the memory
 * allocated for a doubly linked list of integers.
 * @head: A pointer to the head of the doubly linked list.
 * Description: This function takes the head
 * of a doubly linked list and
 * frees the memory allocated for each node in the list.
 * Return: No return value.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *iTmp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((iTmp = head) != NULL)
	{
		head = head->next;
		free(iTmp);
	}
}

