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

/**
 * dog_t - typdef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
