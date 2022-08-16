#include "lists.h"
/**
 * listint_len - function that get the number of element in a linked list
 * @h: pointer to the list
 * Return: number of data in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
