#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node_end - add new node end
 * @head: pointer of node
 * @str: string with info
 *
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *lastNode;
	int count = 0;

	newNode = malloc(sizeof(list_t));
	lastNode = *head;
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->next = NULL;
	while (str[count])
	{
		count++;
	}
	newNode->len = count;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (lastNode->next != NULL)
		lastNode = lastNode->next;
	lastNode->next = newNode;
	return (lastNode);
}
