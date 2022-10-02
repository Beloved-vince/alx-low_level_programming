#include "lists.h"
#include <stdio.h>

void free_dlistint(dlistint_t *head)
{
	dlistint_t *free_node;

	if (head == NULL)
		return;
	free_node = head;

	while (head)
	{
		free_node = head;
		head = head->next;
		free(free_node);
	
	}
}
