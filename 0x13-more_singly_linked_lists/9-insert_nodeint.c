#include "lists.h"
/**
  * insert_nodeint_at_index - inserts a new node at a given position
  * @head: pointer to pointer of the first element on list
  * @idx: index of list where the new node should be added
  * @n: integer to be inserted
  * Return: address of the new node or NULL if it fails
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node0, *tmp;
	unsigned int q;

	tmp = *head;

	q = 0;
	while (tmp && q < idx - 1)
	{
		tmp = tmp->next;
		q++;
	}

	node0 = malloc(sizeof(listint_t));
	if (node0 != NULL)
	{
		node0->n = n;
		if (idx == 0)
		{
			node0->next = *head;
			*head = node0;
			return (node0);
		}
		if (q + 1 == idx)
		{
			node0->next = tmp->next;
			tmp->next = node0;
			return (node0);
		}
	}
	free(node0);
	return (NULL);
}
