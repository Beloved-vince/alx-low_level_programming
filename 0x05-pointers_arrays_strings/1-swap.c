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
		return (a = b);
	}	

	if (*b != *a)
	{
		return (*b = *a);
	}
}
