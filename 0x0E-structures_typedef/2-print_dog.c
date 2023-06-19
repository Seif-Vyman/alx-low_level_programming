#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function initialize data of dogs
 * @d: struct which will be initialize
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		if (!d->name)
			printf("Name: (nil)\n");
		if (d->age)
			printf("Age: %f\n", d->age);
		if (!d->age)
			printf("Age: (nil)\n");
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		if (!d->owner)
			printf("Owner: (nil)\n");
	}
	else
		printf(" \n");
}
