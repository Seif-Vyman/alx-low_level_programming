#include "dog.h"
#include <stdio.h>

/**
* init_dog - print a reverse of string by funtcion strrev
* @name: pointer of string
* @age: age of human
* @owner: name of human
* @d: struct name
*struct dog d - struct for dogs
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
