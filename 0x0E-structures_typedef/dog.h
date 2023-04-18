#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - this stract for dogs
 * @name: name of dog
 * @age: age of dog
 * @owner: dog's friend
 *
 * Description: this struct make for dog information like name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#typedef struct dog dog_t;

#endif
