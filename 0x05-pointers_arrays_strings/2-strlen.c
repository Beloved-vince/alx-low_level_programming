#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * int _strlen - find the lenght of a string
 * and return it in integer form
 *@s: String variable
 *
 * Return: nothing but in mainfile
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; count < '\0'; count++)
	{
		s[count];	
	}

	printf("%d\n", count);

}
