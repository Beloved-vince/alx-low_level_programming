#include "lists.h"
/**
 * print_listint - prototype to print all element of linked list
 * @h: pointer  to the lis
 * Return: number of element
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

	h = h->next;

		count++;
	}

	return (count);
}
