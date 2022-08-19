#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * binary_to_uint - convert binary to decimal
 * @b: unsigned char to be converted to decimal
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1, rem, decimal = 0, len, count = 0;


	if (!b)
		return (0);
	len = atoi(b);

	while (len)
	{
		rem = len % 10;
		decimal = decimal + rem * base;
		len = len / 10;
		base = base * 2;
	}

while (b[count])
{
	if (b[count] < '0' || b[count] > '1')
	return (0);
	count++;
}
	return (decimal);
}
