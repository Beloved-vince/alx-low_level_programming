#include "main.h"
#include <stdio.h>
/**
 * print_rev - reverse order
 * counter is to first count to end, n is to count back
 * @s: Function string
 * Return: String in reverse
 */
void print_rev(char*s)
{
	int count = 0;

	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
	counter++;
	}

	for (int n = (counter -1); n>= 0; n--)
	{
		puts(s[n]);
	}

	puts("\n");
}
