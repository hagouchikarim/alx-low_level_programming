#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add a new node at the end of a list.
 * @head: Address
 * @n: Integer
 * Return: Address of the new node.
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *iTemp, *iTemp2;

	iTemp = malloc(sizeof(listint_t));
	if (iTemp == NULL)
		return (NULL);

	iTemp->n = n;
	iTemp->next = NULL;
	if (*head == NULL)
	{
		*head = iTemp;
		return (iTemp);
	}
	iTemp2 = *head;
	while (iTemp2->next)
		iTemp2 = iTemp2->next;
	iTemp2->next = iTemp;
	return (iTemp);
}

