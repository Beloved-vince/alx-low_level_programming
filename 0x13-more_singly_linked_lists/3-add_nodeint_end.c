#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - function that add element from the end of a list
 * @head: pointer to the list
 * @n: Data to be added to the list
 * Return: Last node to the top
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *newNode, *lastNode;

	newNode = malloc(sizeof(listint_t));
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	lastNode = *head;

	while (lastNode->next != NULL)
		lastNode = lastNode->next;

	lastNode->next = newNode;
	return (newNode);

}
