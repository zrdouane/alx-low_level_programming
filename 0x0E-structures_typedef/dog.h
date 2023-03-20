#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
*struct dog - a new type of dog
*@name: name of dog
*@age: age of dog
*@owner: owner of name
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif