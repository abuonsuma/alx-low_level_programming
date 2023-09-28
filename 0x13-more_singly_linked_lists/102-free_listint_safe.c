#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t q = 0;
	int r;
	listint_t *tmp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		r = *h - (*h)->next;
		if (r > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			q++;
		}
		else
		{
			free(*h);
			*h = NULL;
			q++;
			break;
		}
	}

	*h = NULL;

	return (q);
}
