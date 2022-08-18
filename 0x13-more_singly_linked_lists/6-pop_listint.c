#include "lists.h"
/**
 * pop_listint - function that delete the head of a node
 * @head: node to be deleted
 * Return: Deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *newNode;
	int output;

	if (*head == NULL)
		return (0);

	output = (*head)->n;
	newNode = *head;
	*head = (*head)->next;

	free(newNode);
	return (output);

}
