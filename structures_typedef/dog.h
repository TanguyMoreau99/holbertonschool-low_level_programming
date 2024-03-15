#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>

/**
* struct dog - structure for the dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*/

struct dog
{
	char *name;

	float age;

	char *owner;

};

void init_dog(struct dog *t, char *name, float age, char *owner);
void print_dog(struct dog *t);

#endif
