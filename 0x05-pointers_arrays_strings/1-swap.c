#include "main.h"
#include <stdio.h>
/**
 * swap_int - Replacing two particular varible
 * and interchanging both with each value
 * @a: int parameter\
 * @b: int parameter
 *
 * Return: Swapped value
 */
void swap_int(int *a, int *b)
{
	if (*a != *b)
	{
		*a = *b;
		_putchar(a);
	}	

	if (*b != *a)
	{
		*b = *a;
		_putchar(b);
	}
	
}
