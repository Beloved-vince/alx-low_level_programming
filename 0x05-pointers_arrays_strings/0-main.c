#include "main.h"
#include <stdio.h>

/**
 * main - Check the code
 *
 *Return: Always 0 success
 */
int main(void)
{
	int n;

	n = 402;
		printf("n = %d \n",n);

		int i = reset_to_98(&n);
		printf("n = %d\n", i);

	
	return (0);
}
