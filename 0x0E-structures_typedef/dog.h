#ifndef MY_HEADER_FILE_H
#define MY_HEADER_FILE_H
#include <stdio.h>

/**
 * struct dog - struct for data gathering on dogs
 * @name: name of dog
 * @owner: name of owner
 * @age: age of dog
 *
 * Description: Details of dog
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
