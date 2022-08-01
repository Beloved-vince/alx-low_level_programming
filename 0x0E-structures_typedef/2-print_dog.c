#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function prototype
 * @d: array pointer
 *
 * Description: a function that print a struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("nil");

	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Ownner: %s\n", d->owner);
	}
}
