#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *q = NULL;
	listint_t *r = NULL;

	while (*head)
	{
		r = (*head)->next;
		(*head)->next = q;
		q = *head;
		*head = r;
	}

	*head = q;

	return (*head);
}
