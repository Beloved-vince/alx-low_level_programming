#include "main.h"
#include <stdio.h>
/**
 * swap_int - Replacing two particular varible
 * and interchanging both with each value
 * @a: int parameter\
 * @b: int parameter 2
 *
 * Return: Swapped value
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;

}
