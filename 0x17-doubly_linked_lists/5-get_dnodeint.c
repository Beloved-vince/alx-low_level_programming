#include "lists.h"
#include <stdio.h>
/**
 * get_dnodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: head of linked list
 * @index: node index to return
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int position = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (index == position)
			return (head);
		position++;
		head = head->next;
	}

	return (NULL);
}
