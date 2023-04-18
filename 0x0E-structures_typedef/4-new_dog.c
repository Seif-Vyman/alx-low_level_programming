#include "dog.h"
#include <stdio.h>

/**
* new_dog - print a reverse of string by funtcion strrev
* @name: pointer of string
* @age: age of human
* @owner: name of human
*struct dog d - struct for dogs
*/
dog_t *new_dog(char *name, float age, char *owner);
{
	dog_t *d;

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	if (!d)
		return (NULL);
	return (d);
}
