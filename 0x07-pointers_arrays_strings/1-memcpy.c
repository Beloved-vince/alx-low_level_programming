#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copies memory area
 * @dest: array of string
 * @src: array of string
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
