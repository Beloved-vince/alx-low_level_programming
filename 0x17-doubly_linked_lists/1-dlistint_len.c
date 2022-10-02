#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - prints all the elements of a dlistint_t list
 * @h: pointer to head of the dlistint_t list
 * Return: number of nodes of dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_len = 0;

	if (h == NULL)
		return (node_len);

	while (h->prev != NULL)
	{
		h = h->prev;
	}

	while (h)
	{
		h = h->next;
		node_len += 1;
	}

return (node_len);
}
