#include "main.h"
/**
* _strspn -> function that gets the length of a prefix substring.
* @s: string parameter
* @accept: character that contains the byte
* Return: Returns the number of bytes in the initial segment of s,
* which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	strspn(s, accept);
	return (accept);
}
