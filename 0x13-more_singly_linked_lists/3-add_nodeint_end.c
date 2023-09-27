#include "lists.h"

/**
 * add_nodeint_end - function adds node at the end of linked list
 * @head:first element in the list
 * @n: data to insert in new element
 *
 * Return: pointer to the new node, NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node0;
	listint_t *temp = *head;

	node0 = malloc(sizeof(listint_t));
	if (!node0)
		return (NULL);

	node0->n = n;
	node0->next = NULL;

	if (*head == NULL)
	{
		*head = node0;
		return (node0);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = node0;

	return (node0);
}
