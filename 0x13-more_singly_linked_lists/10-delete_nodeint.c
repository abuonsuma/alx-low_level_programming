#include "lists.h"
/**
  * delete_nodeint_at_index - function that deletes the node at index
  * @head: pointer to pointer of first elemnt of list
  * @index: the index of node to be deleted
  * Return: 1 if successful, -1 if it fails
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int q = 0;
	listint_t *next_node, *tmp;

	tmp = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	while (tmp != NULL && q < index - 1)
	{
		tmp = tmp->next;
		q++;
		if (tmp == NULL || temp->next == NULL)
			return (-1);
	}

	node0 = tmp->next->next;
	free(tmp->next);
	tmp->next = node0;

	return (1);
}
