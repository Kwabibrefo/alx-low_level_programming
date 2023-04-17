#include "dog.h"
/**
 * struct dog - Dog attributes
 * @name: dog name.
 * @age:  dog age.
 * @owner: name of owner
 *
 * Description: The attributes of a dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}