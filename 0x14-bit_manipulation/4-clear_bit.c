#include "main.h"
/**
 *clear_bit - clear bit at a particular index
 * @n: bit to clear
 * @index: at this index
 * Return: 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 31)
		return (-1);

	*n = *n & ~(1 << index);

	return (1);
}
