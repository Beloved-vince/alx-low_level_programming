#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - variadic function
 * @n: parameters to sum
 *
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;

	unsigned int i, sum;

	i = 0;

	sum = 0;
	if (n == 0)
		return (0);
	va_start(list, n);
	while (i < n)
	{
		sum += va_arg(list, int);
		i++;
	}
	va_end(list);
	return (sum);
}
