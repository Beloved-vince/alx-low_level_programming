#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the values of two integers
 * using two input parameters
 * @a: input parameter 1
 * @b: input parameter 2
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;

}
