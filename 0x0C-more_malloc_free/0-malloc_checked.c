#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - function to allocate memory
 * @b: array size
 * Return: memory area
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

		return (ptr);
}
