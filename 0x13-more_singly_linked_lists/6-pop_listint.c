#include "lists.h"

/**
 * pop_listint - will delete the head node of a linked list
 * @head: the pointer to the first element in the linked list
 *
 * Return:  data inside the elements that was deleted,
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int q;

	if (!head || !*head)
		return (0);

	q = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (q);
}
