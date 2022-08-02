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
	if (d != NULL)
	{

		if (d->name == NULL)
			printf("nil");

		else
			printf("Name: %s \n", d->name);
			printf("Age: %f \n", d->age);
		if (d->owner == NULL)
		printf("nil");

	else
	printf("Ownner: %s\n", d->owner);
	}
}
