#include "dog.h"

/**
 * init_dog - Dog attributes
 * @name: dog name.
 * @age:  dog age.
 * @owner: name of owner
 * @d: pointer to int_dog
 *
 * Description: The attributes of a dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
