#include "lists.h"
/**
* add_nodeint - function that add node lists.h the beg	nning of list
* @head: Header pointer to the list
* @n: Data to be added to list
* Return: Nothing
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
		listint_t *newNode;

		newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		*head = newNode;

	newNode->n = n;
	newNode->next = *head;

	*head = newNode;

	return (*head);
}
