#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* get_endianness - that checks the endianness
*
* Description: Write a function that checks the endianness.
* Return: 0 if big endian, 1 if little endian
*/

int get_endianness(void)
{
	unsigned int x = 1;

	char *y = (char *)&x;

	if (*y)
		return (1);

	else
		return (0);
}
