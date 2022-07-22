#include "main.h"
#include <math.h>
/**
 * _pow_recursion - basic math raise to power
 *@x: number to be powered
 *@y: number that will power
 * Return: x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (_pow_recursion(x, y - 1) * x);
}
