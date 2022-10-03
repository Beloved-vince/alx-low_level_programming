#include "lists.h"
#include <stdio.h>
/**
 * free_dlistint - frees a listint_t list
 * @head: head of linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *free_list;

	if (head == NULL)
		return;

	while (head)
	{
		free_list = head;
		head = head->next;
		free(free_list);
	}
}
