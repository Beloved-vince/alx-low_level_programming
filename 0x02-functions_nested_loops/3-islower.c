#include "main.h"

/**
 * main - Entry point and checking for lower case character
 * @c : character to check the case
 *
 * Return: 0 if lower else or 1if upper
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

