#include "main.h"
/**
 * get_bit - function that get the value of bit at a particular index
 * @n: value to be get atthis particular index
 * @index: position of value
 * Return: 1 or 0
 */
int get_bit(unsigned long n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	return ((n >> index) & 1);
}
