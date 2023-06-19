#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function initialize data of dogs
 * @d: struct which will be initialize
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if ( d && name && age && owner)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
