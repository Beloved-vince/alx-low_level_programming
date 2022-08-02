#include <stdio.h>
#include "dog.h"
/**
 * init_dog - function to declare structures
 * @d: gettting the members of struct dog with pointer d in an array format
 * @name: The dog name
 * @age: The Dog age
 * @owner: The Dog owner's name
 *
 * Description: working with structures of different data type
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
