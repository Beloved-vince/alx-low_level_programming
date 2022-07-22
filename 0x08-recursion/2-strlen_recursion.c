#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - print the length of the string variable
 * @s: String to get its length
 * Return: nothing is string is null or end of strng is null
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (strlen(s));
}
