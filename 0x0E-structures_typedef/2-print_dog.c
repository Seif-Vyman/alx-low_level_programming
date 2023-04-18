#include "dog.h"
#include <stdio.h>

/**
* print_dog - print a reverse of string by funtcion strrev
* @d: struct name
*struct dog d - struct for dogs
*/
void print_dog(struct dog *d)
{
if ((*d).name == NULL)
	printf("(nil)\n");
if ((*d).name != NULL)
	printf("name: %s\n", (*d).name);
if ((*d).age == 0)
	printf("(nil)\n");
if ((*d).age != 0)
	printf("age: %f\n", (*d).age);
if ((*d).owner == NULL)
	printf("(nil)\n");
if ((*d).owner != NULL)
	printf("owner: %s\n", (*d).owner);
}
