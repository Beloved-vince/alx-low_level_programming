#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Check if a random  number is positive, negative or zero
 *
 * Return: 0 Always success 
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	
	if( n > 0)
	{
	printf("%d is positive %s \n", n, "positive");
	}

	if(n == 0)
	{
	printf("%d is zero %s \n", n, "is zero");
	}

	if(n < 0)
	{
	printf("%d is negative %s \n", n, "is negative");
	}
	return (0);
}
