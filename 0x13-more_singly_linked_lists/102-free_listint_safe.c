#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *q = head;
	listint_t *r = head;

	if (!head)
		return (NULL);

	while (q && r && r->next)
	{
		r = r->next->next;
		q = q->next;
		if (r == q)
		{
			q = head;
			while (q != r)
			{
				q = q->next;
				r = r->next;
			}
			return (r);
		}
	}

	return (NULL);
}
