#include "function_pointers.h"
/**
 *print_name - function to print only name in multiple arguement
 *@name: name to be printed
 *@f: Function to pointer
 *Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	/** Return nothing if both name and function type are empty */
	if (name && f)
	f(name);
}
