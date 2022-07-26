#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - function allocating the pointer address to a malloc function
  * @size: number of array to be printed
 * @c: array to return
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *assign;

	assign = malloc(sizeof(char) * size);

	if (size == 0)

	{
		return (NULL);
	}

	if (assign == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		assign[i] = c;
	}

	return (assign);
}
