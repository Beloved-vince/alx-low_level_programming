#include "main.h"
/**
 * _memset - prints buffer in constant byte
 * @b: Address of memory to print
 * @n:size of memory block that is to be filled
 *
 * Return: Nothing
 */
char *_memset(char *s, char b, unsigned int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		s[count] = b;
	}
}
