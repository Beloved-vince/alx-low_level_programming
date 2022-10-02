#include "lists.h"
#include <stdio.h>
/**
 * free_dlistint - frees a listint_t list
 * @head: head of linked list
 */
void free_dlistint(dlistint_t *head)
{

	if (head == NULL)
		return;

	while (head)
	{
		head = head->next;
		free(head);
	}
}
