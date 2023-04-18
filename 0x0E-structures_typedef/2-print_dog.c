#include "dog.h"
#include <stdio.h>

/**
* print_dog - print a reverse of string by funtcion strrev
* @d: struct name
*struct dog d - struct for dogs
*/
void print_dog(struct dog *d)
{
if (d)
{
	printf("Name: %s\n", (*d).name ? (*d).name : "(nil)");
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner ? (*d).owner : "(nil)");
}
}
