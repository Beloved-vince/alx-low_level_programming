#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char *c;
int *i;
double *d;

	c = malloc_checked(sizeof(char) * 1023);
	printf("%p", (void *)c);
	i = malloc_checked(sizeof(int) * 122);
	printf("%p", (void *)i);

	d = malloc_checked(INT_MAX);
		printf("%p", (void *)d);

	free(c);
	free(i);
	free(d);

	return (0);
}
