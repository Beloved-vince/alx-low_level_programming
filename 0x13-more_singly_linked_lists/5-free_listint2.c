#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint2 - function to free List
 * @head: Pointer to free
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	while (head != NULL)
	{
		*head = (*head)->next;
		free(*head);
	}

	free(*head);
}
