#include "main.h"
/**
 * factorial - factorial of a given number decreasing by 1
 * @n: variable decreased by one
 * Return: n*(n-1)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
