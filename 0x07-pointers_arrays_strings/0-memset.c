#include "main.h"
/**
 * _memset - fills memory with constant byte.
 * @s: array of char
 * @b: array of chat
 * @n: number of bytes
 * Return:(s)
 */
char *_memset(char *s, char b, unsigned int n)
{
char *p = s;
while (n > 0)
{
*p = b;
p++;
n--;
}
return (s);
}
