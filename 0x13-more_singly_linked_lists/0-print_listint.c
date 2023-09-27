#include "lists.h"

/**
 * print_listint - will print all elements of a linked list
 * @h: linked list of type list_t to print
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t q = 0;

	while (h)
	{
		printf("%d\n", h->n);
			q++;
			h = h->next;
	}
	return (q);
}
