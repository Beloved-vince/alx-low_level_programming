#include "main.h"
/**
* _strpbrk -> function that searches a string for any of a set of bytes.
* @s: the string to be checked with xter in accept
* @accept: the string bytes to be checked with that of s
* Return: Returns a pointer to the byte in s that matches the bytes in accept,
* or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
	strpbrk(s, accept);
	return (s);
}
