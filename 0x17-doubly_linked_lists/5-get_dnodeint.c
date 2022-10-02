#include "lists.h"
#include <stdio.h>

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
		head = head-> next;
	}

	return (NULL);
}
