#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmpNode = NULL;
	const listint_t *r = NULL;
	size_t q = 0;
	size_t newNode;

	tmpNode = head;
	while (tmpNode)
	{
		printf("[%p] %d\n", (void *)tmpNode, tmpNode->n);
		q++;
		tmpNode = tmpNode->next;
		r = head;
		newNode = 0;
		while (newNode < q)
		{
			if (tmpNode == r)
			{
				printf("-> [%p] %d\n", (void *)tmpNode, tmpNode->n);
				return (q);
			}
			r = r->next;
			newNode++;
		}
		if (!head)
			exit(98);
	}
	return (q);
}
