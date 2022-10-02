#include "lists.h"
#include <stdio.h>
/**
 * free_dlistint - frees a listint_t list
 * @head: head of linked list
 */
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
