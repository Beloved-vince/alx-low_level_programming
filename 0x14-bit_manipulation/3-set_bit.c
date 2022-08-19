#include "main.h"
/**
 * set_bit - function to set bit to 1
 * @n: value to be set to 1
 * @index: at this index
 * Return: 1 else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 31)
		return (-1);

	*n = (1 << index) | *n;

	return (1);
}
