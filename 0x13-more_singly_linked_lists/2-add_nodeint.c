#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of linked list
 * @head: the poinetr to the first node in the list
 * @n: data to insert in new node
 * Return: pointer to new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node0;

	node0 = malloc(sizeof(listint_t));
	if (!node0)
		return (NULL);

	node0 ->n = n;
	node0->next = *head;
	*head = node0;

	return (node0);
}
